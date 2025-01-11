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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
       // vector<int> v(n);
        ll ch=0;
        ll sum=0;
        ll Min=INT_MAX;
        forn(i,0,n)
        {
            ll t;
            cin>>t;
            if(t<0) ch++;
           // v[i]=t;
            if(Min>abs(t)) Min=abs(t);
            sum+=abs(t); 
        }
        if(ch%2==0)
        cout<<sum<<endl;
        else{
            cout<<(sum-2*Min)<<endl;
        }

    
    }
    
}