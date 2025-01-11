#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root 
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}


int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll sum=0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            sum+=x;

        }
        if(isPerfectSquare(sum))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
    
}