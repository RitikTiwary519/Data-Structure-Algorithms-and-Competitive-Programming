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
string solve()
{
int n;
        cin>>n;
        vector<int> v1,v2;
        forn(i,0,n)
        {
            int x;
            cin>>x;
            v1.push_back(x);
        }

        forn(i,0,n)
        {
            int x;
            cin>>x;
            v2.push_back(x);
        }
        forn(i,0,n)
        {
            if(v1[i]<v2[i])
            {
                swap(v1[i],v2[i]);
            }
        }
        int f=v1[n-1];
        int l=v2[n-1];
        forn(i,0,n-1)
        {
            if(l>=v2[i] && f>=v1[i])
            {
                continue;
            }
            else{
            return "No";
            }
        }
        return "Yes";
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       cout<<solve()<<endl; 

    }
    
}