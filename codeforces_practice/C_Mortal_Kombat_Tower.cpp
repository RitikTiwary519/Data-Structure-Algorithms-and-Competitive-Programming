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

void CoderRitik()
{
    int n;
    cin>>n;
    vector<int> v(n);
    forn(i,0,n) cin>>v[i];

    vector<vector<int>> dp(n+1,vector<int>(2,INT_MAX));
    
    if(n==1 || n==2)
    {
        cout<<(v[0]==1)<<endl;
        return;
    }

    if (v[0] == 1) dp[0][0] = 1;
    else dp[0][0] = 0;

    if (v[1] == 1) dp[1][0] = 1+dp[0][0];
    else dp[1][0] = dp[0][0];

    dp[0][1] = 1e9; // It is not possible for you to play the first move as the other play should start
    dp[1][1] = dp[0][0];
    for(int i=2;i<n;i++)
    {
        for(int person=0;person<=1;person++)
        {
            if(person==1)
            {

                dp[i][person]=min(dp[i-1][0],dp[i-2][0]);

            }
            else
            {
                dp[i][0]=v[i]+dp[i-1][1];
                if(i>1)
                {
                    dp[i][0]=min(dp[i][0],v[i]+v[i-1]+dp[i-2][1]);
                }
            }
        }
    }

    cout<<min(dp[n-1][0],dp[n-1][1])<<endl;


}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        CoderRitik();
    }
    
}