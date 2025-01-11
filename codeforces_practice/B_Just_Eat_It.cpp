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
    int n;
    cin>>n;
    bool neg=false;
    vector<int> v(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]<0) 
        {
            neg = true;
        }
        total+=v[i];
    }
    if(neg==false)
    {
        cout<<"YES"<<endl;
        return;
    }
    vector<int> pref(n);
    pref[0]=(v[0]<0 ? 0 : v[0]);
    int maxi = INT_MIN;
    for(int i=1;i<n;i++)
    {
        pref[i] = pref[i-1] + v[i];
        if(pref[i]<0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    if(maxi>=total)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
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