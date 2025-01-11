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
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
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
    int t;
    cin>>t; 
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll sum=0;
        for(auto &it: v)
        {
            cin>>it;
            sum+=it;
        }
        sum=sum/n;

        ll ext=0;

        
        int fl=0;    
        for (ll i = 0; i < n; i++)
        {
            if(v[i]>=sum)
            {
                ext+=abs(v[i]-sum);
            }
            else{
                ll temp=abs(v[i]-sum);
                if(temp>ext)
                {
                    no
                    fl=1;
                    break;
                }
                else{
                    ext-=temp;
                    
                }
            }
        }
        if(fl==0)
        yes
        
        
        
    }
    
}