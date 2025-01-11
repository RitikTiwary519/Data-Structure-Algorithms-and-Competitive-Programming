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
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(auto &it : v) cin>>it;
    m--;
    ll cnt=v[m];
    ll i=m-1,j=m+1;
    while(i>=0 and j<=n-1)
    {
        if(v[i]==1 && v[j]==1)
        {
            i--;
            j++;
            cnt+=2;
        }
        else{
            i--;
            j++;
        }
    }
    while(i>=0)
    {
        cnt+=v[i];
        i--;
    }
    while(j<=n-1)
    {
        cnt+=v[j];
        j++;
    }
    cout<<cnt<<endl;
    
}