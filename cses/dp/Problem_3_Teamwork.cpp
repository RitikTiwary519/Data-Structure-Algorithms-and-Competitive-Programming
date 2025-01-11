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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    forn(i,0,n) cin>>v[i];
    vector<int> dp(n+1,0);
    dp[0]=v[0];
    for(int i=1;i<n;i++)
    {
        int temp = v[i];
        for (int j = i; j >=  max(0, i - k + 1); j--)
        {
            if(j<0)
            {
                continue;
            }
            temp = max(temp,v[j]);
            dp[i]=max(dp[i],temp*(i-j+1)+(j==0 ? 0 : dp[j-1]));
        }
    }
    cout<<dp[n-1]<<endl;
}

int main()
{
    freopen("teamwork.in", "r", stdin);
	freopen("teamwork.out", "w", stdout);
    solve();
}