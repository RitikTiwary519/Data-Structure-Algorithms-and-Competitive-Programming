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

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n,m;
        cin>>n>>m;
    
        int maxi=0;
        int current=n;
        forn(i,n,m+1)
        {
            int man;
            string s=to_string(i);
            sort(s.begin(),s.end());
            man=s[s.size()-1]-s[0];
            if(man>maxi)
            {
                maxi=man;
                current=i;
            }
            if(maxi==9)
            {
                break;
            }
            
        }
        cout<<current<<endl;
    }

    
}