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
    int n,q;
    cin>>n>>q;
    vector<int> v;
    input
    srt
    int maxi= v[n-1];
    vector<int> dp(maxi+1,0);

    for (int i = 0; i < n; i++)
    {
        dp[v[i]]=1;
    }

    int check=0;
    for(int i=0;i<=maxi;i++)
    {
        if(dp[i]==1)
        {
            check++;
        }
        dp[i]=check;
    }

    while(q--)
    {
        int x;
        cin>>x;
        if(x>=maxi)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<dp[maxi]-dp[x-1]<<endl;
        }
    }
     
}