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
int solve()
{
string str;
cin>>str;
int one=0,zero=0;
for (int i = 0; i < str.size(); i++)
{
    if(str[i]=='0')
    {
        zero++;
    }
    else
    {
        one++;
    }
}
int ans=0;
if (one==zero)
{
    return 0;
}
for (int i = 0; i < str.size(); i++)
{
    if((str[i]=='0' && one==0) || (str[i]=='1' && zero==0))
    {
        return str.size()-ans;
    }
    else{
        if(str[i]=='0')
        {
            one--;
        }
        else{
            zero--;
        }
    }
    
 
        

}

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