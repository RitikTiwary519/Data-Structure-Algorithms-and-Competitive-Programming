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
int solve()
{
   int n,m;
   cin>>n>>m;
   vector<int> a(n),b(m);
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
   }
   for (int i = 0; i < m; i++)
   {
    cin>>b[i];
   }
   int l1=0,l2=0,r1=n-1,r2=m-1;
   sort(a.begin(),a.end());
   sort(b.rbegin(),b.rend());
   
   int ans=0;
   while(l1<r1)
    {
        if(abs(a[l1]-b[l2])>abs(a[r1]-a[r2]))
        {
            ans+=abs(a[l1]-b[l2]);
            l1++;
            l2++;
        }
        else{
            ans+=abs(a[r1]-b[r2]);
            r1--,r2--;
        }
    }
    return ans;

}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    
}