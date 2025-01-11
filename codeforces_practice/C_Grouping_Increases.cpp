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
        int n;
        cin>>n;
        vector<int> v(n),s,t;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        s.push_back(v[0]);
        for(int i=1;i<n-1;i++)
        {
            if(v[i]<v[i+1])
            {
                s.push_back(v[i]);
                t.push_back(v[i+1]);
            }
            else{
                t.push_back(v[i]);
            }
        }
        int ans=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]<s[i+1] && i>0 && i<=n-2) ans++;
        }
        for (int i = 1; i < t.size()-2; i++)
        {
            if(t[i]<t[i+1] && i<n-2) ans++;
        }
        cout<<ans<<endl;
        

        
    }
    
}
