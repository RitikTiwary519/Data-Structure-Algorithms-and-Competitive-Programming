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
    string s1,s2;
    cin>>s1;
    cin>>s2;
    string ans;
    if(s1[0]==s2[0])
    {
        ans.push_back('*');
        ans.push_back(s1[0]);
        return ans;
    }
    if(s1[s1.length()-1]==s2[s2.length()-1])
    {
       
        ans.push_back(s1[s1.length()-1]);
         ans.push_back('*');
        return ans; 
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s1,s2;
        cout<<solve()<<endl;
    }
    
}