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


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v,c;
        forn(i,0,n)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        srt

       for(int i=0,j=0;i<n;i++)
       {
        if(i+1==v[j])
        {
            j++;
        }
        else{
            c.push_back(i+1);
        }
       }
       int sum=0;
       for(auto it: c)
       {
        sum+=it;
       }
       if(sum==m)
       {
        cout<<"YES"<<endl;
       }
       else{
        int i=1;
        while(sum<=m)
        {
            if(sum<m)
            {
                sum=n+i;
                i++;
            }
            else if(sum==m)
            {
                cout<<"YES"<<endl;
            }
        }
        cout<<"NO"<<endl;
       }
    }
    
}