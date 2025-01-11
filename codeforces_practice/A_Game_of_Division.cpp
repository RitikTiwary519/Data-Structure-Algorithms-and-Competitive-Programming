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
    int n,k;
    cin>>n>>k;
    vector<int> v(n,0);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v[i]=(x);
        mp[x%k]++;
    }
    int val=-1;
    for(auto it: mp)
    {
        if(it.second==1)
        {
            val=it.first;
        }
    }
    if(val==-1)
    {
        no
        return;
    }
    else
    {
        yes
        for (int i = 0; i < n; i++)
        {
            if((v[i]%k)==val)
            {
                cout<<i+1<<endl;
                break;
            }
        }
        
        return;
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