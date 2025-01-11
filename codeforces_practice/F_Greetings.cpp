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

// bool fun(pair<int,int> &a,pair<int,int> &b)
// {
//     return a.first<b.first;
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<pair<int,int>> v(n);
//         forn(i,0,n)
//         {
//             int x,y;
//             cin>>x>>y;
//             v[i]={x,y};
//         }

//         sort(v.begin(),v.end(),fun);
//         int ans=0;
//         vector<int> ch(n);
//         forn(i,0,n)
//         {
//             ch[i]=v[i].second;
//         }
//         forn(i,0,n)
//         {
//             forn(j,i,n)
//             {
//                 if(ch[i]>ch[j])
//                 {
//                     ans++;
//                 }
//             }
//         }
//         cout<<ans<<endl;
//     }
    
// }


