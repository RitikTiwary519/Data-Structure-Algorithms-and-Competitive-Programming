#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t;
    cin>>t;

    while (t--)
    {
    set<char> s;
    ll n;
    cin>>n;
    string str;
    cin>>str;
    ll sum=0;
    ll l=str.length();
    for (ll i = 0; i < n; i++)
    {
        if(s.find(str[i])==s.end())
        {
            s.insert(str[i]);
            sum+=(l-i);
        }
        else{
            continue;
        }
    }
    cout<<sum<<endl;
    


    }
    
}