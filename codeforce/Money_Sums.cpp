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
    vector<vector<int>> dp(n+1,vector<int>(1e3+1,0));
    ll sum=0;
    forn(i,0,n)
    {
        cin>>v[i];
        sum+=v[i];
        dp[i][v[i]]=1;
    }
    sort(v.begin(),v.end());
    dp[0][v[0]]=1;

for (int i = 1; i < n; i++) {
    for (int j = sum; j >= 0; j--) {  // Iterate backwards to avoid overwriting
        dp[i][j] = dp[i - 1][j];      // Copy the previous row's value

        if (dp[i - 1][j] == 1) {
            dp[i][j + v[i]] = 1;      // Update achievable sums
        }
    }
}



    for(int i=0;i<=sum;i++)
    {
        if(dp[n-1][i]==1)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;



}

int main()
{
    solve();
}