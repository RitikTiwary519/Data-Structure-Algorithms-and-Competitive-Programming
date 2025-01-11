// bhai ye mut bolna tu mera code padh ke seekhne aaya hai


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

// ll min(ll a, ll b)
// {
//     if(a>=b) return a;
//     return b;
// }

// ll min(ll a, ll b)
// {
//     if(a>=b) return b;
//     return a;
// }

//fuck rating , i am here to learn
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll> v;
        forn(i,0,n)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        ll mini=v[0];
        ll maxi=v[0];
        ll ans=0;
        forn(i,0,n)
        {
            mini=min(mini,v[i]);
            maxi=max(maxi,v[i]);
            if(mini+2*x<maxi)
            {
                ans++;
                mini=v[i];
                maxi=v[i];
            }
        }
        cout<<ans<<endl;
    }
    
}