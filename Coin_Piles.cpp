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


// 8min and 59 seconds

void solve()
{
    int n,m;
    cin>>n>>m;
    if( (abs(n-m)>min(n,m)))
    {
        cout<<"NO"<<endl;
        return;
    }
    if(n%3==0 && m%3==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    if((n+1)%3==0 && (m+2)%3==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    else if((n+2)%3==0 && (m+1)%3==0)
    { 
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}