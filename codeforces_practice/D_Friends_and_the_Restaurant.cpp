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
        forn(i,0,n) cin>>a[i];
        forn(i,0,n) cin>>b[i];
        forn(i,0,n) c[i]=a[i]-b[i];

        sort(c.begin(),c.end());

        ll i=0,j=n-1;
        ll sum=0;
        while(i<j)
        {
            if(c[i]+c[j]>0)
            {
                j--;
            }
            else if(c[i]+c[j]<=0)
            {
                i++,j--;
                sum++;
            }
        }

        cout<<sum<<endl;

    }
    
}