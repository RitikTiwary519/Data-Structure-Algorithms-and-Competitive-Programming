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
    int n,m;
    cin>>n>>m;
    vector<int> v(n,0);
    int x,a,b,c;
    cin>>x>>a>>b>>c;
    v[0]=x;
    for(int i=1;i<n;i++)
    {
        v[i]=(a*v[i-1]+b)%c;
        //cout<<v[i]<<" ";
    }

    int sum=0;
    for(int i=0;i<m;i++)
    {
        sum+=v[i];
    }
    int i=0,j=m;
    int xoring = sum;
    while(j<n)
    {
        sum+=v[j++];
        sum-=v[i++];
        xoring=xoring^sum;
        // i++,j++;
    }
    cout<<xoring<<endl;
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