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
using namespace std;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)
long long mod=1e9+7;
long long factorial(int n){
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
        ans%=mod;
    }
    return ans;
}
 

int main()  
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;

       long long ans=(long long)n*(n-1);
       ans%=mod;
        ans=(ans*factorial(n))%mod;
         cout<<ans<<endl;
    }
    
}