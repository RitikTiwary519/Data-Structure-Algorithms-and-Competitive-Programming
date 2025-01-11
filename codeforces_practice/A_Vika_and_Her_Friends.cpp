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

#define FORN(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define FORD(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

string ans(vector<pair<int,int>> vec,int x,int y)
{
    for (auto &it: vec)
        {
            if((it.first+it.second)%2==(x+y)%2)
            {
                return "NO";
            }
            return "YES";
        }
        
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,f;
        cin>>m>>n>>f;
        int x,y;
        cin>>x>>y;
        if(x>m || y>n)
        {
            cout<<"NO"<<endl;
            break;
        }
        vector<pair<int,int>> v(f);
        for (int i = 0; i < f; i++)
        {
            int a,b;
            cin>>a>>b;
            v[i]={a,b};
        }
        //cout<<"hi"<<endl;
        cout<<ans(v,x,y)<<endl;
    }
}