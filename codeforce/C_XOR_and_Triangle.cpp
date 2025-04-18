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

bool check(int a , int b, int c)
{
    if(a+b>c && b+c>a && a+c>b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve()
{
    int n;
    cin>>n;
    for(int i=n;i>=sqrt(n);i--)
    {
        if(check(n,i,n^i))
        {
            cout<<i<<endl;
            // cout<<"------"<<endl;
            // cout<<n<<" "<<i<<" "<<(n^i)<<endl;
            return;
        }
    
    }
    cout<<-1<<endl;
    return ;
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