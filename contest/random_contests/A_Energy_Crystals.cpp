#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<3<<endl;
        return;
    }
    ll ans = 2*ceil(log2(n))+1;
    cout<<ans<<endl;
}

int main()
{
    int t ;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}

