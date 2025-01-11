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
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>three;
        ll mini=INT_MAX;
        ll maxi=INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            ll q,x;
            cin>>q>>x;
            if(q==3)
            {
                three.push_back(x);
            }
            if(q==1)
            {
                maxi=max(x,maxi);
            }
            if(q==2)
            {
                mini=min(x,mini);
            }

        }
        ll cnt=0;
        for(auto it : three)
        {
            if(it>=maxi and it<=mini)
            {
                cnt++;
            }
        }
        ll ans=mini-maxi+1-cnt;
        if(ans>0)
        {
            cout<<ans<<endl;
        }
        else{
            cout<<0<<endl;
        }
        
    }
    
}