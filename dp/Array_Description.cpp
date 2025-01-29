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

ll dp[1000+3][1000+3];
void solve()
{

    memset(dp,0,sizeof(dp));
    ll n,m;
    cin>>n>>m;
    vector<int> v(n,0);
    forn(i,0,n) cin>>v[i];

    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i==1)
            {
                if(v[i-1]==0 || v[i-1]==j)
                {
                    dp[i][j]=1;
                }
            }
            else if(v[i-1]==0 || v[i-1]==j)
            {
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j]+dp[i-1][j+1];
            }
        }
    }
    int sum=0;
    forn(i,0,m)
    {
        sum+=dp[n][i];
    }
    cout<<sum<<endl;
    
}

int main()
{
    solve();
}