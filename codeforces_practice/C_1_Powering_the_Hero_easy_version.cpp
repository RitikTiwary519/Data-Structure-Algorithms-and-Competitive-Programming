#include <bits/stdc++.h>
#define ll long long
#define rsrt sort(vans.rbegin(), vans.rend());
#define input                  \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        v.push_back(x);        \
    }
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(vans.begin(), vans.end());
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


int solve(int n,vector<int>& val)
{
   
    vector<int> vans;
    int ans=0;
    int j=0;
    
    for(int i=0;i<n;i++)
    {
       // cout<<"i"<<"="<<i<<endl;
      
        if(val[i]!=0)
        {
            vans.push_back(val[i]);
            rsrt
            
        }
        else{  //val[i]==0
            if(vans.size()==0)
            {
                ans+=0;
            }
            else
            ans+=vans[j++];
        }
    }
    
    return ans;
}

int main()
{
  
    int tt;
    cin>>tt;
  
    while (tt--)
    {
        int n;
        cin>>n;
        vector<int> val;
       
        forn(i,0,n)
        {
            int x;
            cin>>x;
            val.push_back(x);
        }
       
        cout<<solve(n,val)<<endl;
    }
    
}