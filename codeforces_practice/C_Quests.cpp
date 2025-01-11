#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
     
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        vector<ll> b(n);
        for(ll i=0;i<n;i++)
        {
            ll y;
            cin>>y;
            if(i==0)
            {
                a[i]=y;
            }
            else{
                a[i]=y+a[i-1];
            }

        }
        ll maxy=0;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(maxy<=x)
            {
                maxy=x;
            }
            if(i==0)
            {
                b[i]=x;
            }
            else{
                if(x>=b[i-1])
                {
                b[i]=x;
                }
                else{
                    b[i]=b[i-1];
                }
            }

        }
        
        ll sum=0;
        for(ll i=0;i<k;i++)
        {
            if(i<n){
            sum=max(sum,a[i]+b[i]*(k-i-1));
            }
            else{
            sum=max(sum,a[n-1]+maxy*(k-i-1));
            }
            
            
        }
        cout<<sum<<endl;
    }
    
}