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
ll MOD = 1e9 + 7;
long long pow(int n ,int m)
{
    if(m==0)
    {
        return 1;
    }

    if(m%2==0)
    {
        return (pow(n,m/2)*pow(n,m/2))%MOD;
    }
    else
    {
        return( n*pow(n,m/2)*pow(n,m/2))%MOD;
    }
}
void solve()
{
    int n;
    cin>>n;
    cout<<pow(2,n)<<endl;
}

signed main()
{
    int t;
    t=1;
    while (t--)
    {
        solve();
    }
    
}