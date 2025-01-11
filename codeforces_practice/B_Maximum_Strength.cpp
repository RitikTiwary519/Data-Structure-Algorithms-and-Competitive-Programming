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
        string n,m;
        cin>>n>>m;
        int x=n.size();
        int y=m.size();
        if(x<y)
        {
            while(x<y)
            {
                n='0'+n;
                x++;
            }
        }
        int ans=0;
        int ct=0;
        forn(i,0,x)
        {
            if(n[i]==m[i] && ct==0)
            {
                continue;
            }
            else if(n[i]!=m[i] && ct==0)
            {
                ans+=abs(n[i]-m[i]);
                ct=1;
            }
            else{
                ans+=9;
            }
        }
        cout<<ans<<endl;

        
    }
    
}