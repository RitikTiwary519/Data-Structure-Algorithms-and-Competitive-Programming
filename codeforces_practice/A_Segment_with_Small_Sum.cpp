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
    ll ans=INT_MIN;
    while(j<n)
    {
        x+=v[j];
        while(x>sum)
        {
            x-=v[i];
            i++;
        }
        j++;
        ans=max(ans,j-i+1);
    }
    cout<<ans-1<<endl;
    

}