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
    ll t=1;

    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        ll l=0;
        ll c=0;
        ll sum=0;
        ll length=1;
        for (ll r = 0; r < n; r++)
        {
           
            sum+=v[r];
          //  cout<<v[r]<<"added"<<" ";
            while(sum>m)
            {

                sum-=v[l];
               // cout<<v[l]<<"removed"<<" ";    
                l++;


            }
            c+=(r-l+1);   
        }
        cout<<c<<endl;
        
        
    }
    
}