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


bool solve(int n,int m)
{
    if(n<m)
    {
        return 0;
    }
    if(n==m)
    {
        return 1;
    }
    if(n%3!=0)
    {
        return 0;
    }
    else{
        return solve(n/3,m) || solve(2*n/3,m);
    }
}




int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        if(solve(n,m))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
}