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
    int n;
    cin>>n;
    string a,b;
    cin>>a;
    cin>>b;
    int oa=0,ea=0,ob=0,eb=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]=='1')
        {
            if((i+1)%2==1)
            {
                oa++;
            }
            else
            {
                ea++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(b[i]=='1')
        {
            if((i+1)%2==1)
            {
                ob++;
            }
            else
            {
                eb++;
            }
        }
    }
    int opo=(n+1)/2,epo=n-opo;

    // cout<<"------"<<endl;
    // cout<<oa+eb<<" "<<ea+ob<<endl;
    if(oa+eb<= epo && ea+ob<=opo)
    {
        yes
    }
    else
    {
        no
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