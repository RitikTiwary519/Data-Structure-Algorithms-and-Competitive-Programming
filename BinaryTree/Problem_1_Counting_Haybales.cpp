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
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    while (q--)
    {
        int x,y;
        cin>>x>>y;
        int a1 = lower_bound(arr,arr+n,x)-arr;
        int a2 = upper_bound(arr,arr+n,x)-arr;
        // if(v[a]!=x)
        // {
        //     a= upper_bound(v.begin(),v.end(),x)-v.begin();
        // }
        int b1 = lower_bound(arr,arr+n,y)-arr;
        int b2 = upper_bound(arr,arr+n,y)-arr;

        // if(arr[a1]==x && arr[b1]==y)
        // {
        //     cout<<b1-a1+1<<endl;
        // }
        // else if(arr[a1]!=x && arr[b1]==y)
        // {
        //     cout<<b1-a1<<endl;
        // }
        // else if(arr[a1]==x && arr[b1]!=y)
        // {
        //     cout<<b1-a1<<endl;
        // }
        // else
        // {
        //     cout<<b1-a1<<endl;
        // }

        cout<<b2-a1<<endl;

        
    }
    
}

signed main()
{
    freopen("haybales.in", "r", stdin);
    freopen("haybales.out", "w", stdout);
    solve();
}