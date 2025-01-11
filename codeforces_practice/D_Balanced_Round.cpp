#include <bits/stdc++.h>
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define input                 \
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

#define FORN(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define FORD(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

int main()
{
    int t;
    cin>>t;
    vector<ll> ans;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v;
        input
        srt
        
        ll best=1,current=1;
        ll i=1;
        while(i<n)
        {
            if(abs(v[i]-v[i-1])>k)
            {
                best=max(current,best);
                current=1;
            }
            else{
              ++current;
            }
            ++i;
        }
        best=max(current,best);
        cout<<n-best<<endl;
        
    }
}