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
    int n,k;
    cin>>n>>k;
    int steps=0;
    if((n%2)==1)
    {
        if(k%2==1)
        {
            n=n-k;
            steps+=(ceil(1.0*n/(k-1))+1);
        }
        else
        {
            n=n-(k-1);
            steps+=(1.0*ceil(n/k)+1);
        }
    }
    else
    {
        if(k%2==1)
        {
            steps+=ceil(1.0*n/(k-1));
        }
        else
        {
            steps+=ceil(1.0*n/k);
        }
    }
    cout<<steps<<endl;
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