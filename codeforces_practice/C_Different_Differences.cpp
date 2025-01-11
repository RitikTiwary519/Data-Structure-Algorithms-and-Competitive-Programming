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
        int k,n;
        cin>>k>>n;
        
        vector<int> ans;
        ans.push_back(1);
        for(int i=1;i<k;i++)
        {
            if(ans[i-1]+i<n || (ans[i-1]+i==n && i==k-1) )
            {
               ans.push_back(ans[i-1]+i); 
              // cout<<"ho"<<endl;
            }
            else{
              //  cout<<"hi"<<endl;
                ans.push_back(1+ans[i-1]);

            }
        }
        for(auto it : ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;

    }
    


}

