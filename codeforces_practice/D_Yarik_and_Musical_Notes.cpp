#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        map<ll,ll> m;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            m[x]++;
        }
        ll ans=0;
        for(auto it: m)
        {
            if(it.second>1)
            {
                ans+=it.second *(it.second-1)/2;
            }

        }
        cout<<((ans)+(m[1]*m[2]))%INT_MAX<<endl;
        
    }
    
}