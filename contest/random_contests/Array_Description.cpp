// #include <bits/stdc++.h>
// using namespace std;
// #define MOD 1000000007

// int fun(int ind, vector<int> &v, int n, int m) {
//     if(ind == n) return 1;

//     int ans = 0;
//     if(v[ind] != 0) {
//         if(ind == 0 || abs(v[ind] - v[ind-1]) <= 1) {
//             ans = fun(ind + 1, v, n, m);
//         }
//     } else {
//         if(ind == 0) {
//             for(int i = 1; i <= m; i++) {
//                 v[ind] = i;
//                 ans = (ans + fun(ind + 1, v, n, m)) % MOD;
//                 v[ind] = 0;
//             }
//         } else {
//             for(int delta = -1; delta <= 1; delta++) {
//                 int val = v[ind-1] + delta;
//                 if(val >= 1 && val <= m) {
//                     v[ind] = val;
//                     ans = (ans + fun(ind + 1, v, n, m)) % MOD;
//                     v[ind] = 0;
//                 }
//             }
//         }
//     }
//     return ans;
// }

// void solve() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i];

//     cout << fun(0, v, n, m) << endl;
// }

// int main() {
//     solve();
// }


#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int n, m;
vector<int> v;
vector<vector<int>> dp;

int solve(int ind, int prev) {
    if (ind == n) return 1;

    if (dp[ind][prev] != -1) return dp[ind][prev];

    int ans = 0;
    if (v[ind] != 0) {
        // Value is fixed, check if it's valid with previous
        if (ind == 0 || abs(v[ind] - prev) <= 1) {
            ans = solve(ind + 1, v[ind]);
        }
    } else {
        // Try all values for this position
        if (ind == 0) {
            for (int i = 1; i <= m; i++) {
                ans = (ans + solve(ind + 1, i)) % MOD;
            }
        } else {
            for (int delta = -1; delta <= 1; delta++) {
                int val = prev + delta;
                if (val >= 1 && val <= m) {
                    ans = (ans + solve(ind + 1, val)) % MOD;
                }
            }
        }
    }

    return dp[ind][prev] = ans;
}

int main() {
    cin >> n >> m;
    v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    // prev can range from 0 to m, we use 0 as dummy for ind == 0
    dp.assign(n, vector<int>(m + 2, -1));

    cout << solve(0, 0) << "\n";
}
