#include <bits/stdc++.h>
#define ll long long
#define int ll
#define rsrt sort(v.rbegin(), v.rend());
#define input                  \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        v.push_back(x);        \
    }
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define deb(v)            \
    for (auto &i : v)     \
    {                     \
        cout << i << ' '; \
    }
#define arrinput               \
    for (ll i = 0; i < n; i++) \
    {                          \
        cin >> arr[i];         \
    }
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

void solve()
{
    int n;
    cin>>n;
    
    ll dp[n+1][n*n];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n*(n+1)/4; j++)
        {

            dp[i][j] += ((j>=i ? dp[i-1][j-i] : 0) + dp[i-1][j]);

        }
    }
    cout<<dp[n][n*(n+1)/4]<<endl;
    
}

signed main()
{
    solve();
}