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
void Fast(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
}


// int main()
// {
//     Fast();
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         string str;
//         cin>>str;
//         int ct=0;
//         int n=str.size();
//         if(n==1)
//         {
//             if(str[0]=='Y' || str[0]=='e' || str[0]=='s')
//             {
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
//             continue;
//         }

//         else{
//         forn(i,0,n-1)
//         {
//             if(str[i]=='Y' && str[i+1]!='e')
//             {
//                 ct=1;
//                 break;
//             }
//             else if(str[i]=='e' && str[i+1]!='s')
//             {
//                 ct=1;
//                 break;
//             }
//             else if(str[i]=='s' && str[i+1]!='Y')
//             {
//                 ct=1;
//                 break;
//             }
//             else if(str[i]!='Y' && str[i]!='e' && str[i]!='s')
//             {
//                 ct=1;
//                 break;
//             }



            
//         }
//         }

//         if(ct==1)
//         {
//             cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"YES"<<endl;
//         }

//     }
    
// }

string s;
void solve(){
    string t;cin >> t;
    if(s.find(t) == string::npos)cout << "NO" << endl;
    else cout << "YES" << endl;
}
int main(){
   
    Fast();
    while(s.size() < 200) s += "Yes";
    int t = 1;cin >> t;
    for (int i = 1; i <= t; i++){
        solve();
    }
}