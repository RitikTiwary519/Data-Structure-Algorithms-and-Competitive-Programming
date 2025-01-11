#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n,sum=0,x=0;
    cin>>n>>sum;
    
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll j=0,i=0;
    ll ans=INT_MAX;
    while(j<n)
    {
        x+=v[j];
        while(x-v[i]>sum)
        {
            x-=v[i];
            i++;
       
        }
        
        if(x>=sum)
        //ans=min(ans,j-i+1);
        ans=min(ans,j-i+1);
        j++;
    }
    cout<<ans<<endl;
}