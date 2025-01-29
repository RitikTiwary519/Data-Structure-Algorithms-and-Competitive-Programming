#include <bits/stdc++.h>
#define ll long long
#define forn(a, b, c) for (int (a) = (b); (a) < (c); (a)++)
using namespace std;

void setIO(string name = "") {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (!name.empty()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int check(int my_move, int your_move) {
    // Determines if `my_move` beats `your_move`
    if ((my_move == 0 && your_move == 2) || 
        (my_move == 1 && your_move == 0) || 
        (my_move == 2 && your_move == 1)) {
        return 1; // Win
    }
    return 0; // Loss or Draw
}

int main() {
    setIO("hps");
    
    int n, ch;
    cin >> n >> ch; // Number of games, max number of changes allowed
    vector<char> v(n);
    forn(i, 0, n) cin >> v[i];

    unordered_map<char, int> mp = {{'H', 0}, {'P', 1}, {'S', 2}};
    vector<int> moves(n);
    forn(i, 0, n) moves[i] = mp[v[i]];

    const int MOVES = 3; // H, P, S
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(ch + 1, vector<int>(MOVES, 0)));

    // Initialize the first round
    forn(m, 0, MOVES) {
        dp[0][0][m] = check(m, moves[0]);
    }

    // Fill DP table
    forn(i, 1, n) {
        forn(k, 0, ch + 1) {
            forn(m, 0, MOVES) {
                // Stay with the same move
                dp[i][k][m] = dp[i - 1][k][m] + check(m, moves[i]);

                // Switch to a different move if k > 0
                if (k > 0) {
                    dp[i][k][m] = max(dp[i][k][m], dp[i - 1][k - 1][(m + 1) % MOVES] + check(m, moves[i]));
                    dp[i][k][m] = max(dp[i][k][m], dp[i - 1][k - 1][(m + 2) % MOVES] + check(m, moves[i]));
                }
            }
        }
    }

    // Find the maximum wins with up to `ch` changes
    int result = 0;
    forn(k, 0, ch + 1) {
        forn(m, 0, MOVES) {
            result = max(result, dp[n - 1][k][m]);
        }
    }

    cout << result << endl;
    return 0;
}
