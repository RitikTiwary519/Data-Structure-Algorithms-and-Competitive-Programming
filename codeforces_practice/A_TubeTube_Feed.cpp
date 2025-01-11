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


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v1;
        vector<pair<int,int>> v2;

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
            v2.push_back({x,i+1});
        }


        pair<int,int> ct={0,0},mx={0,0};

        
        forn(i,0,n)
        {
            if(m>=v1[i])
            {
                ct=v2[i];
                m--;
                mx=max(ct,mx);
            }
            else{
                m--;
                continue;
            }
        }


        if(mx.first==0)
        {
            cout<<-1<<endl;
        }
        
        else
        {
            cout<<mx.second<<endl;
        }


    }
    
}