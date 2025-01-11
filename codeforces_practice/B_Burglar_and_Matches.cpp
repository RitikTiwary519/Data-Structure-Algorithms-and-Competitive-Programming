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

bool comp(pair<int,int> &a,pair<int,int> &b)
{
    return a.second>b.second;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> v(m);
    for(auto &it : v)
    {
        cin>>it.first;
        cin>>it.second;
    }
    sort(v.begin(),v.end(),comp);
    int i=0;
    int amt=0;
    for(auto it: v)
    {
        if(m==0) break;
        int fl=min(n,it.first);
        n=n-fl;
        amt+=fl*(it.second);

    }
    cout<<amt<<endl;
    
    
}