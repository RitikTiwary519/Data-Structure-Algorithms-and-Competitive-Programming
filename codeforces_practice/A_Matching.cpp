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
int solve(string str,int n)
{
    int sum=1;
    forn(i,0,str.size())
        {
            if(str[i]=='?' && i==0)
            {
                sum=9;
            }
            else if(str[i]=='?' && i!=0)
            {
                sum=sum*10;
            }
        }
        if(sum==1)
        {
            return 1;
        }
        else{
            return sum;
        }
        
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string str;
        cin>>str;
        
        if(str[0]=='0')
        {
            cout<<0<<endl;
        }
        else {
            cout<<solve(str,str.size())<<endl;
        }
    }
    
}