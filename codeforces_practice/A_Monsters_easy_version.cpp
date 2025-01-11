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
    int n;
    cin>>n;
    vector<int> inp;
    forn(i,0,n)
    {
        int x;
        cin>>x;
        inp.push_back(x);
    }
    sort(inp.begin(),inp.end());
    int j=1;
    int rst=0;
    forn(i,0,n)
    {
        if(i==0 && j+1<=inp[i] )
        {
            rst=rst+(inp[i]-(1));
            rst=rst+(inp[i+1]-(2));
            
            j++;
        
            continue; 
        }
        if(j==inp[i])
        {
            continue;
        }
        if(j+1==inp[i])
        {
            j++;
            continue;
        }
        else
        {
            rst=rst+(inp[i]-(j+1));
            j++;
            continue;
        }
        
    }
    return rst;


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