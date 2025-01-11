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

int solve()
{
    int n,k,x;
    cin>>n>>k>>x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    srt
    int bob=0;
    int ans=INT_MIN;
    vector<int> prefix(n);
    prefix[0]=v[0];
    for (int i = 1; i <= n-1; i++)
    {
        prefix[i]=prefix[i-1]+v[i];
    }
    // for(auto it : prefix)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    for (int i = n-1; i >n-1-k; i--)
    {
        bob+=v[i];
    }
    for (int i = n-1; i >= n-1-x; i--)
    {
        ans = max(ans,prefix[i]-2*(prefix[i]-prefix[i-k+1]));
      //  bob-=v[i];
        // if(i-k+1>=0)
        // {
        //     bob+=v[i-k+1];
        // }
    }
    return ans;
    
    

    

     
}

int main()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        cout<<solve()<<endl;
    }
    
}