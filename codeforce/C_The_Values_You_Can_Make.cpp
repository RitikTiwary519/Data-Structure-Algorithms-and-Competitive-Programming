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

int dp[2][501][501];

void solve()    
{
    int n,k;
    cin>>n>>k;
    dp[0][0][0]=1;

    for(int i=1;i<=n;i++)
    {
        int curr=(i%2);
        int prev = 1-curr;
        int c;
        cin>>c;
        for (int j = 0; j <= k; j++)
        {
            for (int y = 0; y <= j; y++)    
            {
                dp[curr][j][y]=dp[prev][j][y];
                if(j>=c)
                {
                    dp[curr][j][y] |= dp[prev][j-c][y];
                }
                if(y>=c)
                {
                    dp[curr][j][y] |= dp[prev][j-c][y-c];
                }
            }
        }
    }

    vector<int> ans;
    for(int i=0;i<=k;i++)
    {
        if(dp[n%2][k][i])
        {
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<endl;
    for (auto it: ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    

}

int main()
{
    solve();
}