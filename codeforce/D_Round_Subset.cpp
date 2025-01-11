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

int dp[201][50][50]; //indices we moved , taken from them , power of 5 : values of 2 power we get

void solve()
{
    dp[0][0][0]=0;
    int n,k;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;

        for (int j = 0; j <= i; j++)
        {
            for (int y = 0; y < n; y++)
            {
                dp[i][j][y]=dp[i-1][j][y];
                int pow5 = log(x)/log(5);
                int pow2 = log(x)/log(2);
                if(j>0)
                {
                    dp[i][j][y]=pow2+dp[i-1][j-1][y+pow5];
                }
            }
            
        }
        
    }
    
}

int main()
{
    solve();
}