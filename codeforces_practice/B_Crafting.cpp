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
    ll n ;
    cin>>n;
    vector<ll> v(n),qty(n),temp;
    forn(i,0,n)
    {
        cin>>v[i];
    }
    forn(i,0,n)
    {
        cin>>qty[i];
    }

    forn(i,0,n)
    {
        ll x= v[i]-qty[i];
        temp.push_back(x);
    }

    sort(temp.begin(),temp.end());

    
    if(temp[0]<0 && temp[1]<0)
    {
        no
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            if(temp[i]<abs(temp[0]))
            {
                no
                return;

            }
        }
        yes
    }

}

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
       solve();
    }
    
}