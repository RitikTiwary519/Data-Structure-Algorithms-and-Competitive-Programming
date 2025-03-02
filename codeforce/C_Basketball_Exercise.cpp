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
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(3,0)); 
    dp[0][0]=a[0];
    dp[0][1]=b[0];

    for (int i = 1; i < n; i++)
    {
        dp[i][0]=max(dp[i-1][0],a[i]+dp[i-1][1]);
        dp[i][1]=max(dp[i-1][1],b[i]+dp[i-1][0]);
    }
    cout<<max(dp[n-1][0],dp[n-1][1])<<endl;
    

}

signed main()
{
    solve();
}