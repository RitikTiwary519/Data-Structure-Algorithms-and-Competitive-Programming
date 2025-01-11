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
        int num;
        cin>>num;
        vector<int> v;
        forn(i,0,num)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        vector<int> ans;
        forn(i,0,num)
        {
            if(v[i]!=1)
            {
                int ct=0;
                while (v[i]==0 && i<num)
                {
                    i++,ct++;
                }
                ans.push_back(ct);

                
            }
        }
        for(auto it: ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    
}