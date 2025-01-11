// #include <bits/stdc++.h>
// #define ll long long

// using namespace std;



// // ll solve(ll i ,vector<ll> &c,vector<ll> &p,ll k,vector<vector<ll>>&dp)
// // {
// //     if(i==0)
// //     {
// //         if(c[i]<=k)
// //         {
// //             return dp[i][k]=p[i];
// //         }
// //         else
// //         {
// //             return dp[i][k]=0;
// //         }
// //     }
// //     if(dp[i][k]!=-1)
// //     {
// //         return dp[i][k];
// //     }
// //     ll ntaken = solve(i-1,c,p,k,dp);
// //     ll taken = INT_MIN;
// //     if(c[i]<=k)
// //     {
// //         taken=p[i]+solve(i-1,c,p,k-c[i],dp);
// //     }
// //     return dp[i][k]=max(ntaken,taken);
// // }

// int main()
// {
//     ll n,k;
//     cin>>n>>k;
//     vector<ll> c(n),p(n);

//     for(ll i=0;i<n;i++) 
//     {
//         cin>>c[i];
//     }

//     for(ll i=0;i<n;i++) 
//     {
//         cin>>p[i];
//     }

//     vector<vector<ll>> dp(n+1,vector<ll>(k+1,-1));

//     for(ll cost = 0;cost<=k;cost++)
//     {
//         if(cost>=c[0]) dp[0][cost]=p[0];
//     }

//     for (ll i = 1; i < n; i++)
//     {
//         for(ll cost=1;cost<=k;cost++)
//         {
//             ll ntaken = dp[i - 1][cost]; // Not taking the current item
//             ll taken = INT_MIN; // Taking the current item
//             if (cost >= c[i]) {
//                 taken = p[i] + dp[i - 1][cost - c[i]];
//             }
//             dp[i][cost] = max(ntaken, taken);
//         }
//     }
//         cout<<dp[n-1][k]<<endl;
// }
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;

    if (n == 0 || k == 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<ll> c(n), p(n);

    for (ll i = 0; i < n; i++) cin >> c[i];
    for (ll i = 0; i < n; i++) cin >> p[i];

    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));

    // Initialize the first row (base case)
    for (ll cost = 0; cost <= k; cost++) {
        if (cost >= c[0]) dp[0][cost] = p[0];
    }

    // Fill the DP table
    for (ll i = 1; i < n; i++) {
        for (ll cost = 0; cost <= k; cost++) {
            ll ntaken = dp[i - 1][cost]; // Not taking the current item
            ll taken = 0; // Taking the current item
            if (cost >= c[i]) {
                taken = p[i] + dp[i - 1][cost - c[i]];
            }
            dp[i][cost] = max(ntaken, taken);
        }
    }

    // Output the maximum profit
    cout << dp[n - 1][k] << endl;

    return 0;
}
