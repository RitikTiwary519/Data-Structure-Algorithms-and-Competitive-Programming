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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    forn(i,0,n) cin>>v[i];
    unordered_map<int,int> mp;
    forn(i,0,n)
    {
        if(v[i]%k!=0) mp[k-v[i]%k]++;
    }

    int ans=0;
    int maxi=0;
    int val = 0;
    for(auto it: mp)
    {
        if((it.second)>=maxi)
        {
            maxi=it.second;
            val=max(it.first,val);
        }
    }
    if(maxi==0)
    {
        cout<<maxi<<endl;
        return;
    }
    int maxii=0;
    for(auto it: mp)
    {
        if(it.second==maxi)
        {
            maxii=max(maxii, k*1ll*(it.second-1)+it.first+1);
        }
    }
    cout<<maxii<<endl;

}

signed main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}