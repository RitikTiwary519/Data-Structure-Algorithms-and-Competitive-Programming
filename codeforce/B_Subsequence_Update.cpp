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

void solve()
{
    int n,l,r;
    cin>>n>>l>>r;
    l--,r--;
    vector<int> v(n);
    priority_queue<int,vector<int>,greater<int>> pqb;
    priority_queue<int,vector<int>,greater<int>> pqa;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(i<l)
        {
            pqb.push(v[i]);
        }
        else if(i>r)
        {
            pqa.push(v[i]);
        }
    }


    vector<int> temp;
    for (int i = l; i <= r; i++)
    {
        temp.push_back(v[i]);
    }
    sort(temp.begin(),temp.end());
    int siz = r-l+1;
    int sum =0;
    int cnt=0;
    int pt=0;
    while(cnt<siz)
    {
        if(!pqa.empty() && pqa.top()<=temp[pt])
        {
            sum+=pqa.top();
            pqa.pop();
            cnt++;
        }
        else
        {
            sum+=temp[pt];
            cnt++;
            pt++;
        }
    }
  
    int sizb = r-l+1;
    int sumb =0;
    int cntb=0;
    int ptb=0;
    while(cntb<sizb)
    {
        if(!pqb.empty() && pqb.top()<=temp[ptb])
        {
            sumb+=pqb.top();
            pqb.pop();
            cntb++;
        }
        else
        {
            sumb+=temp[ptb];
            cntb++;
            ptb++;
        }
    }
    cout<<min(sum,sumb);
  
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}