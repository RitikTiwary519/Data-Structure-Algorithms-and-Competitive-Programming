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

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    vector<vector<int>> dp(n+1,vector<int>(n+1,0)); //i is index and j is the number of false people
    dp[0][0]=1;
    dp[0][1]=1;

    for (int i = 1; i < n; i++)
        for(int j=1;j<n;j++)
    {
        {
            if(j>=v[i])
            {
                dp[i][j]+=dp[i-1][j-v[i]];
            }
            dp[i][j]+=dp[i-1][j-1];
        }
    }
    int sum=0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum+=dp[n-1][i];
    // }
    // cout<<sum<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<"------"<<endl;
    
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}