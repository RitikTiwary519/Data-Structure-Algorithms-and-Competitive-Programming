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

void solve()    
{
    int n;
    string str;
    cin>>n;
    cin>>str;

    int diff=0;
    for (int i = 0; i < n; i++)
    {
        if(str[i]=='0')
        {
            diff++;
        }
    }
    if(diff==0)
    {
        cout<<"Alice"<<endl;
        return;
    }

    if(diff!=0 && (diff%6)==0){
        cout<<"draw"<<endl;
    }
    else
    {
        cout<<"BOB"<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}