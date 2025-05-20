#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define rsrt sort(v.rbegin(), v.rend());
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

void solve()
{
    int x,y;
    cin>>x>>y;
    int m = max(x,y);
    int ans=0;
    if(m%2==1)
    {
        ans+= (m*m)-abs(1-x)-abs(m-y);
    }
    else
    {
        ans+= (m*m)-abs(m-x)-abs(1-y);
    }
    cout<<ans<<endl;
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