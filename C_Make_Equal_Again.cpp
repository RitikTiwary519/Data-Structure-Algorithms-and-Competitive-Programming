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
    int n;
    cin>>n;
    vector<int> v(n);
    forn(i,0,n)
    {
        cin>>v[i];
    }
    int fval=v[0];
    int f=1;
    while(f<n && v[f]==v[f-1])
    {
        f++;
    }
    int lval=v[n-1];
    int l=n-2;
    while(l>=0 && v[l]==v[l+1])
    {
        l--;
    }

    int cnt1=f-0;
    int cnt2=n-1 - l;
    if(lval==fval)
    {
        int ans = max(0ll,n-cnt1-cnt2);
        if(ans<0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        return;
    }
    else
    {
        int ans = min(n-cnt1,n-cnt2);
        if(ans<0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        return;
    }
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