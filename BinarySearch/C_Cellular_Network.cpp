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

// two pointer and binary search question


bool pfun(vector<int> &c,vector<int> &t,int r)
{
    int i=0,j=0;
    int n = c.size();
    int m = t.size();
    while(i<n && j<m)
    {
        while((i<n) && (c[i]<=(t[j]+r)) && (c[i]>=(t[j]-r)))
        {
            i++;
        }
        j++;
    }
    
    return i==n ? true : false;
}


void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> c(n),t(m);
    for (int i = 0; i < n; i++)
    {
        cin>>c[i];
    }

    for (int j = 0; j < m; j++)
    {
        cin>>t[j];
    }

    int lo = 0;
    int hi = 2*1000000000;
    int ans=0;

    while(lo<=hi)
    {
        int mid = lo+(hi-lo)/2;
        //cout<<mid<<" ";
        if(pfun(c,t,mid)==true)
        {
            ans=mid;
            hi=mid-1;
        }
        else
        {
            lo=mid+1;
        }

    }
    cout<<lo<<endl;
}

signed main()
{
    solve();
    
}