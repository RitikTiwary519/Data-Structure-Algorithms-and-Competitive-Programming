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

void solve()
{
    int n,x,k;
    cin>>n>>x>>k;
    string v;
    cin>>v;

    int steps=0;
    int left=0;
    int right=0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]=='L')
        {
            left++;
        }
        else
        {
            right++;
        }
        if(left==right)
        {
            steps=i+1;
            break;
        }
    }
    left=0;
    right=0;
    int initialstep=0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]=='L')
        {
            left++;
        }
        else
        {
            right++;
        }
        if((x-left+right)==0)
        {
            initialstep=i+1;
            break;
        }
    }

    if(k<initialstep)
    {
        cout<<0<<endl;
        return;
    }
    if(k>=initialstep)
    {
        int excess=k-initialstep;
        if(initialstep==0) cout<<0<<endl;
        else if(steps!=0) cout<<1+excess/steps<<endl;
        else cout<<1<<endl;
    }   
}

signed main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    } 
}