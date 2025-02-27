// #include <bits/stdc++.h>
// #define ll long long
// #define rsrt sort(v.rbegin(), v.rend());
// #define input                  \
//     for (ll i = 0; i < n; i++) \
//     {                          \
//         ll x;                  \
//         cin >> x;              \
//         v.push_back(x);        \
//     }
// #define mp make_pair
// #define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define srt sort(v.begin(), v.end());
// #define deb(v)            \
//     for (auto &i : v)     \
//     {                     \
//         cout << i << ' '; \
//     }
// #define arrinput               \
//     for (ll i = 0; i < n; i++) \
//     {                          \
//         cin >> arr[i];         \
//     }
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// using namespace std;
// #define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
// #define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)


// const int N = 1000;
// const int mod = 1e9+7;
// int dp[N][N];

// void solve()
// {
//     int n,target;
//     cin>>n>>target;
//     vector<int> v(n,0);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>v[i];
//     }
//     memset(dp, 0, sizeof(dp));

//     for (int i = 0; i <= n; i++)
//     {
//         dp[i][0]=1;
//     }
    



//     for(int i = 1; i <=n; i++) { 
//         for(int s = 0; s <= target; s++) {

//             dp[i][s] = dp[i-1][s];
            

//             if(s >= v[i-1]) {
//                 dp[i][s] =( dp[i][s]+dp[i][s - v[i-1]])%mod;
//             }
//         }
//     }
    
//     cout << dp[n][target] << endl;

// }

// signed main()
// {
//     int t;
//     t=1;
//     while (t--)
//     {
//         solve();
//     }
    
// }

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve() {
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // DP table initialization
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));

    // Base case: There is 1 way to form sum 0 (by taking no elements)
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }

    // DP state transition
    for (int i = 1; i <= n; i++) { 
        for (int s = 0; s <= target; s++) {
            dp[i][s] = dp[i - 1][s]; // Exclude current element
            if (s >= v[i - 1]) {
                dp[i][s] = (dp[i][s] + dp[i][s - v[i - 1]]) % mod; // Include current element
            }
        }
    }

    cout << dp[n][target] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
