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
        string str;
        cin>>str;
        map<char,int> m;
        forn(i,0,4)
        {
            m[str[i]]++;
        }
        int mx=0;
        for(auto it: m)
        {
            mx=max(it.second,mx);
        }
        //cout<<mx<<"-----------"<<endl;
        if(mx==4)
        {
            cout<<-1<<endl;
        }
      
        else if(mx==3)
        {
            cout<<6<<endl;
        }
        else if(mx==2 || mx==1)
        {
            cout<<4<<endl;
        }
        else if(mx==0)
        {
            cout<<4<<endl;
        }

    }
    
}