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

int nearprime(int n)
{
    for(int i=n; i>=2; i--)
    {
        bool fl=false;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                fl=true;
                break;
            }
        }
        if(fl==false)
        {
            return i;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        char ch;
        cin>>n>>ch;

        string str;
        cin>>str;

        int prime=nearprime(n);
        
        int cnt=0;
        

        
    }
    
}