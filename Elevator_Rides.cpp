// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int minRides(int index, int currWeight, int rideCount, vector<int>& weights, int maxWeight) {
//     // Base Case: All people are processed
//     if (index == -1) return rideCount;

//     int takeSameRide = INT_MAX, startNewRide = INT_MAX;

//     // Option 1: Try to include in the current ride (if possible)
//     if (currWeight + weights[index] <= maxWeight) {
//         takeSameRide = minRides(index - 1, currWeight + weights[index], rideCount, weights, maxWeight);
//     }

//     // Option 2: Start a new ride
//     startNewRide = minRides(index - 1, weights[index], rideCount + 1, weights, maxWeight);

//     // Return the minimum rides from both choices
//     return min(takeSameRide, startNewRide);
// }

// int main() {
//     int n, x;
//     cin >> n >> x;
    
//     vector<int> weights(n);
//     for (int i = 0; i < n; i++) cin >> weights[i];

//     // Sort weights in decreasing order to process heavier people first
//     sort(weights.begin(), weights.end(), greater<int>());

//     cout << minRides(n - 1, 0, 1, weights, x)-1 << endl;

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> w(n);
    
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    
    // Sort weights to consider smaller items first (optional)
    sort(w.begin(), w.end());

    // DP table: dp[i][curLoad] → Minimum rides needed to place first 'i' persons
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 1e9));

    // Base Case: No one processed → 0 rides
    dp[0][0] = 0;

    // Fill DP table
    for (int i = 0; i < n; i++) { 
        for (int curLoad = 0; curLoad <= x; curLoad++) { 
            if (dp[i][curLoad] == 1e9) continue; // Skip invalid states
            
            // Option 1: Add person 'i' to the current ride if weight allows
            if (curLoad + w[i] <= x) {
                dp[i + 1][curLoad + w[i]] = min(dp[i + 1][curLoad + w[i]], dp[i][curLoad]);
            }

            // Option 2: Start a new ride with this person
            dp[i + 1][w[i]] = min(dp[i + 1][w[i]], dp[i][curLoad] + 1);
        }
    }

    // Get the minimum rides required for all possible `curLoad` values
    int ans = 1e9;
    for (int curLoad = 0; curLoad <= x; curLoad++) {
        ans = min(ans, dp[n][curLoad]);
    }

    cout << ans << endl;
    return 0;
}
