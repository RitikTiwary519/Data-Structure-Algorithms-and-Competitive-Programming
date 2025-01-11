#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll tt;
    cin>>tt;
    while (tt--)
    {
        ll n,p,l,t;
        cin>>n>>p>>l>>t;
        ll lo=0;
        ll hi=n;
        while(lo<hi)
        {
            ll mid= lo+(hi-lo)/2;
            if(mid*l+min(2*mid,(n+6)/7)*t>=p)
            {
                hi=mid;
            }
            else{
                lo=mid+1;
            }
        }
        cout<<n-lo<<endl;
    }
    
}