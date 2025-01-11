#include <bits/stdc++.h>
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define fl for (ll i = 0; i < n; i++)
#define rfl for (ll i = n - 1; i >= 0; i--)
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
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
     int n;
     cin>>n;
     vector<int> v;
     input
     int m=INT_MAX;
     int c=1;
     for (int i = 0; i < n-1; i++)
     {
        if((v[i]>v[i+1]) && c)
        {
            cout<<0<<endl;
            c=0;
            break;
        }
        m=min(m,v[i+1]-v[i]);
     }
     if(c){
     if(m%2==0 )
     {
        cout<<m/2+1<<endl;
     }
     else{
        cout<<m/2+1<<endl;
     }
     }
     

        
    }

    

}