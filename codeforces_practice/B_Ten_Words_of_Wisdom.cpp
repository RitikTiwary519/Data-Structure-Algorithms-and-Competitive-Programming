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

#define FORN(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define FORD(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        vector<pair<int,int>> v;
        unordered_map<int,int> m;
        
        int size;
        cin>>size;

       

        for (int i = 0; i < size; i++)
        {
            int n,q;
            cin>>n>>q;
            v.push_back({q,n});
            m.insert({q,i+1});
        }
        rsrt
        int i=0;
        for(auto &it:v)
        {
            i++;
            if(it.second<=10)
            {
                cout<<m[it.first]<<endl;
                break;
            }
        }
        
    }
    
}
