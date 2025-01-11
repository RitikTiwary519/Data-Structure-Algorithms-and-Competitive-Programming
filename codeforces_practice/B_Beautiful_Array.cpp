#include <bits/stdc++.h>
#define ll long long
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
    int n,k,b,s;
    cin>>n>>k>>b>>s;
    if(s<=(k*b+(k-1)*n) && s>=(k*b))
    {
        int kbprinter=s/(k*b);
        int leftover=s-kbprinter*(k*b);
        while(kbprinter--)
        {
            cout<<k*b<<" ";
        }
        

    }
    else{
        cout<<-1<<endl;
    }
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