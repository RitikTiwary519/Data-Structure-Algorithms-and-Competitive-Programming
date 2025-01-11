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

int fun(vector<int> &v,int ind,vector<int> &dp)
{
    if(ind<=0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int jumpi=abs(v[ind-1]-v[ind])+fun(v,ind-1,dp);
    int jumpii=abs(v[ind-2]-v[ind])+fun(v,ind-2,dp);
    return dp[ind]=min(jumpi,jumpii);

}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    forn(i,0,n)
    {
        
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> dp(n,-1);
    cout<<fun(v,n-1,dp);

    
}