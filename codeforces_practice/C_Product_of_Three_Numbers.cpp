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
    ll n;
    cin>>n;

    ll a = -1;
    ll b = -1;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            a=i;
            b=n/i;
            break;
        }
    }
    if(a==-1 || a==n)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        ll d = -1;
        ll e = -1;

        for(int i=a+1;i*i<=n;i++)
        {
            if(b%i==0)
            {
                d = i;
                e = b/i;
                if(e!=a && e!=d)
                {
                    cout<<"YES"<<endl;
                    cout<<a<<" "<<d<<" "<<e<<endl;
                    return;
                }

            }
        }
        cout<<"NO"<<endl;
    }

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

