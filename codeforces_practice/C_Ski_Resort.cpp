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

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k,q;
        cin>>n>>k>>q;
        vector<int> v;
        forn(i,0,n)
        {
            ll somevalue;
            cin>>somevalue;
            v.push_back(somevalue);
        }
        ll ans=0;
        forn(i,0,n)
        {
            
            if(v[i]<=q)
            {
                ll ct=0;
                while(v[i]<=q && i<n)
                {
                    i++,ct++;
                }
                if(ct>=k)
                {
                    ll ab=ct-k+1;
                    ans+=ab*(ab+1)/2;
                }
            }
        }
        cout<<ans<<endl;
    }
    
}