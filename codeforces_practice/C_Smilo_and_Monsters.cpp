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
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        srt
        ll x=0;
        ll ans=0;
        ll i=0;
        ll j=n-1;
        while (i<j)
        {
           if(x+v[i]<v[j])
           {
            ans+=v[i];
            x+=v[i];
            i++;
           } 
           else{
            if(x+v[i]==v[j])
            {
            x=0;
            ans+=(v[i]+1);
            i++;
            j--;
            }
            else{
                v[i]-=v[j]-x;
                ans+=(v[j]-x+1);
                x=0;
                j--;               
            }
           }
        }
         if (i == j)
    {
        if(v[j]==1)
        {
            ans++;
        }
        else
        {
            ans += ceil((double)(v[j] - x) / 2);
            ans++;
        }
    }
    cout << ans << endl;   
    }
    
}