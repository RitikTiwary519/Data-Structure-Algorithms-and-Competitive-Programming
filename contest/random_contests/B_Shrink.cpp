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
    int n;
    cin>>n;
    vector<int> v(n,0);
    int f=0,l=n-1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            v[f]=i;
            f++;
        }
        else
        {
            v[l]=i;
            l--;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
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