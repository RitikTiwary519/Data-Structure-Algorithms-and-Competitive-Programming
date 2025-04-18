#include <bits/stdc++.h>
#define ll long long
#define int ll
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

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        pq.push(v[i]);
    }

    if(k!=1)
    {
        int sum=0;
        sort(v.begin(),v.end(),greater<int>());
        for (int i = 0; i < k+1 ; i++)
        {
            sum+=v[i];
        }
        cout<<sum<<endl;

    }
    else
    {
        int sum=0;
        for(int i=1;i<n-1;i++)
        {
            sum = max(v[0]+v[i],sum);
            sum = max(v[n-1]+v[i],sum);  
        }
        sum = max(sum,v[0]+v[n-1]);
        cout<<sum<<endl;
    }
    

    
    

}

signed main() {
    ritik_tiwary;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
