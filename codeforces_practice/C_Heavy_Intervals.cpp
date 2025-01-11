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
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n),b(n),c(n);
        for (ll i = 0; i < n; i++)
        {
           cin>> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
           cin>> b[i];
        }
        
        for (ll i = 0; i < n; i++)
        {
           cin>> c[i];
        }
        
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());

        for (ll i = 0; i < n; i++)
        {
           b[i]=b[i]-a[i];
        }
        sort(c.rbegin(),c.rend());
        sort(b.begin(),b.end());
        ll sum=0;
        for (ll i = 0; i < n; i++)
        {
            sum+=((b[i])*c[i]);
        }
        cout<<sum<<endl;
        
    }
    
}