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
        ll base,height;
        cin>>base>>height;
        ll marea=INT_MIN ;
        vector<vector<ll>> v;
        forn(i,0,4)
        {
            ll len;
            cin>>len;
            vector<ll> temp;
            temp.push_back(len);
            forn(j,0,len)
            {
                ll tempv;
                cin>>tempv;
                temp.push_back(tempv);
            }
            v.push_back(temp);
        }
        // for(auto it: v)
        // {
        //     for(auto x : it)
        //     {
        //         cout<<x<<" ";
        //     }
        //     cout<<endl;
        // }

        forn(i,0,4)
        {
            if(i<=1)
           {marea=max((v[i][v[i][0]]-v[i][1])*height,marea);
            //cout<<marea<<endl;
           }
            else{
            marea=max((v[i][v[i][0]]-v[i][1])*base,marea);
            // cout<<marea<<endl;    
            }

        }
        cout<<marea<<endl;







    }
    
}