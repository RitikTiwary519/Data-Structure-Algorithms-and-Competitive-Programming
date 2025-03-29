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

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int i=0,j=0;
    int mini=v[i];
    int maxi=v[j];
    int ans=1;
    while(j<n)
    {
        if(v[j]-v[i]<=k)
        {

        }
        else
        {
            while(i<n && v[j]-v[i]>k)
            {
                i++;
            }

        }
        ans = max(ans,j-i+1);
        j++;
    }
    cout<<ans<<endl;
    
}

int main()  
{
    int t;
    t=1;
    while (t--)
    {
        solve();
    }
    
}