#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool fun(pair<ll,ll> &f1,pair<ll,ll> &f2)
{
    return f1.second<f2.second;
}
ll min(ll &a,ll &b)
{
    if(a<=b) return a;
    else {
        return b;
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<pair<ll,ll>> v;
        ll n,p;
        cin>>n>>p;
        for( ll i = 0; i < n; i++)
        {
            pair<ll,ll> x{0,0};
            cin>>x.first;
            v.push_back(x);
        }
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            v[i].second=min(x,p);
        }
        sort(v.begin(),v.end(),fun);

        ll cost=p;
        ll ct=1;
        for(ll i=0;i<n;i++)
        {
            
        cost+=min(v[i].first,n-ct)*v[i].second;
        ct+=min(v[i].first,n-ct);


        }
        cout<<cost<<endl;
        
    }
    
}
/* mai ta chaliye tere or ve*/