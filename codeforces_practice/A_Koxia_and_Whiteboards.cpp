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
#define forn(a, b, c) for (ll(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (ll(a) = (b); (a) > (c); (a)--)

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> ans(n+m);
        forn(i,0,n+m)
        {
            ll x;
            cin>>x;
            ans[i]=x;
        }
        sort(ans.rbegin(),ans.rend());
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
           sum+=ans[i];
        }
        cout<<sum<<endl;



    }
    
}