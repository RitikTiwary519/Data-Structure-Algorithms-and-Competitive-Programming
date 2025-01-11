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
        char v[n+1][n+1],a[n+1][n+1];
        for (int i = 0; i < n; i++)
        {
            
            for (int j= 0; j < n; j++)
            {
                char val;
                cin>>val;
                v[i][j]=val;
                a[n-i-1][j]=val;       
            }
            
        }
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(v[i][j]!=a[i][j])
                {
                    ans+=abs((v[i][j]-a[i][j]));
                }
            }
        }
        cout<<ans<<endl;        
    }
    
}