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
using namespace std;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,z,a,b,f,g;
        cin>>x>>y>>z;
        cin>>a>>b;
        cin>>f>>g;
        pair<int,int> p[4];
        p[0]={a+f,abs(b-g)};
        p[1]={b+g,abs(a-f)};
        p[2]={x+y-a-f,abs(b-g)};
        p[3]={x+y-b-g,abs(a-f)};
        pair<int,int> pans={0,0};
        for(auto it : p)
        {
            if(pans.first>=it.first)
            {
                pans=it;
            }
        }
        cout<<z+pans.first+pans.second<<endl;
    }
    
}
