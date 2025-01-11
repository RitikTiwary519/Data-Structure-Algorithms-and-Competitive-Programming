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
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n),b(n);
        forn(i,0,n) cin>>a[i];
        forn(i,0,n) cin>>b[i];
        priority_queue<int> pq;

        for (int i = 0; i < n; i++)
        {
            while(a[i]>=0)
            {
                pq.push(a[i]);
                a[i]-=b[i];
            }
        }

        vector<ll> bs;

        while(!pq.empty())
        {
            int x=pq.top();
            pq.pop();
            bs.push_back(x);
        }
        int siz=bs.size();
        ll sum=0;
        ll i=0;
        while(i<siz && (i)!=k)
        {
            sum+=bs[i];
            i++;
        }

        cout<<sum<<endl;





        


    }
    
}