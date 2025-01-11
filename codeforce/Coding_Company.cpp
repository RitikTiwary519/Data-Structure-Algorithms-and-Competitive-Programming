#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

// Recursive function to calculate the number of valid divisions
int solve(int idx, int remainingPenalty, vector<int>& coders, int n, vector<vector<int>>& memo) {
    // Base case: If we have considered all coders
    if (idx == n) {
        return 1; // One valid way (do nothing more)
    }

    // If already computed, return the stored result
    if (memo[idx][remainingPenalty] != -1) {
        return memo[idx][remainingPenalty];
    }

    int ways = 0;

    // Try to form a new team starting with the current coder
    int maxSkill = coders[idx], minSkill = coders[idx];
    for (int i = idx; i < n; i++) {
        maxSkill = max(maxSkill, coders[i]);
        minSkill = min(minSkill, coders[i]);
        int penalty = maxSkill - minSkill;

        if (penalty <= remainingPenalty) {
            ways = (ways + solve(i + 1, remainingPenalty - penalty, coders, n, memo)) % MOD;
        } else {
            break;
        }
    }

    return memo[idx][remainingPenalty] = ways;
}

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> coders(n);
    for (int i = 0; i < n; i++) {
        cin >> coders[i];
    }

    // Sort coders to help calculate penalties incrementally
    sort(coders.begin(), coders.end());

    // Memoization table
    vector<vector<int>> memo(n, vector<int>(x + 1, -1));

    // Start the recursive function
    int result = solve(0, x, coders, n, memo);

    cout << result << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// const int MOD = 1e9 + 7;
// const int INF = 1e9 + 7; // Arbitrary large value representing "INFINITY"

// // Recursive function to calculate the number of valid divisions
// int solve(int idx, int remainingPenalty, vector<int>& coders, int n, vector<vector<int>>& memo, int currentMin) {
//     // Base case: If we have considered all coders
//     if (idx == n && currentMin==INF) {
//         return 1; // One valid way (do nothing more)
//     }

//     // If already computed, return the stored result
//     if (memo[idx][remainingPenalty] != -1) {
//         return memo[idx][remainingPenalty];
//     }

//     int ways = 0;

//     // Try to form a new team starting with the current coder
//     int maxSkill = coders[idx], minSkill = min(currentMin, coders[idx]);
//     for (int i = idx; i < n; i++) {
//         maxSkill = max(maxSkill, coders[i]);
//         int penalty = maxSkill - minSkill;
//             ways+=solve(i + 1, remainingPenalty, coders, n, memo, minSkill);
//         if (penalty <= remainingPenalty) {
//             // If not terminating the team, continue with the new group
//             ways = (ways + solve(i + 1, remainingPenalty - penalty, coders, n, memo, INF)) % MOD;
//     }
//     }
//     return memo[idx][remainingPenalty] = ways;
// }

// int main() {
//     int n, x;
//     cin >> n >> x;

//     vector<int> coders(n);
//     for (int i = 0; i < n; i++) {
//         cin >> coders[i];
//     }

//     // Sort coders to help calculate penalties incrementally
//     sort(coders.begin(), coders.end());

//     // Memoization table
//     vector<vector<int>> memo(n, vector<int>(x + 1, -1));

//     // Start the recursive function with an "infinite" initial minimum skill value
//     int result = solve(0, x, coders, n, memo, INF);

//     cout << result << endl;
//     return 0;
// }
