#include <bits/stdc++.h>
#define ll long long
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

int mod = 1000000000+7;
void solve()
{
    ll n;
    cin>>n;
    ll sum = n*(n+1)/2;

    vector<vector<ll>> dp(501,vector<ll>(1e5,0));

    dp[1][0]=1;
    dp[1][1]=1;
    if(sum%2==1)
    {
        cout<<0<<endl;
        return;
    }
    ll tot = sum/2;

    for(ll i=2;i<=n;i++)
    {
        for(ll j=tot;j>=0;j--)
        {
            dp[i][j]=dp[i-1][j];
            if((j-i)>=0)
            {
                dp[i][j]+=dp[i-1][j-i];
                dp[i][j]=dp[i][j]%(mod);
            }
        }
    }

    cout<<dp[n-1][tot]<<endl;
    return;


}

int main()
{
    solve();
}