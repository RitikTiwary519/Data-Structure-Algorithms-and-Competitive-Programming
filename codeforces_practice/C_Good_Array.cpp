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
    ll n;
    cin>>n;
    vector<ll> v(n);
    unordered_map<ll,ll> mp;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v[i]=x;
        mp[x]++;
        sum+=x;
    }

    vector<ll> ans;
    for(ll i=0;i<n;i++)
    {
        if((sum-v[i])%2==0)
        {
            mp[v[i]]--;
            if(mp[((sum-v[i])/2)]>0)
            {
                ans.push_back(i+1);
            }
            mp[v[i]]++;

        }
    }
    cout<<ans.size()<<endl;
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
}


int main()
{
    solve();
}