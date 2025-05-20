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
signed main()
{
    int n;
    cin>>n;
    int sum=0;
    vector<int> v(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            sum+=(v[i-1]-v[i]);
            v[i]=v[i-1];
        }
    }
    cout<<sum<<endl;
    
}