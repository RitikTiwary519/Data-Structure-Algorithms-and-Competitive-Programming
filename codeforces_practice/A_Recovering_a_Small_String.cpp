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
    int n;
    cin>>n;

    vector<char> v(27);
    char ch='a';
    for(int i=1;i<27;i++)
    {
        v[i]=ch++;
    }
    
     
     if(n<=28)
     {
        int temp= n-2;
        cout<<"aa"<<v[temp]<<endl;
     } 
     else if(n<=53)
     {
        n=n-26;
        int temp=n-1;
        cout<<"a"<<v[temp]<<"z"<<endl;
     } 
     else{
       int temp=n-52;
        
        cout<<v[temp]<<"zz"<<endl;
     } 
    }
    
}