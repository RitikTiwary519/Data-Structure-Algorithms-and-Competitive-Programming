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
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    if(a>c)
    {
        swap(a,c);
        swap(b,d);
    }

    //non overlapping
    if(c>b || d<a)
    {
        cout<<1<<endl;
        return;
    }

    //overlapping case
    //---------
    //     -------- ye wala case

    int cmdend= min(b,d)-c;

    // -----------
    //       -----
    if(cmdend==b && cmdend==d)
    {
        int common_part = cmdend-1;
        if(a!=c)
        {
            cmdend++;
        }
        cout<<cmdend<<endl;
        return;
    }
    else
    {
        int common_part = cmdend-1;
        if(a!=c)
        {
            cmdend++;
        }
        if(b!=d)
        {
            cmdend++;
        }
        cout<<cmdend<<endl; 
        return;
    }
    return;

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