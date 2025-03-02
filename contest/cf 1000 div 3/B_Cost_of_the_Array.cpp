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
    int n,k;
    cin>>n>>k;
    vector<int> v;
    input
    int counter=1;
    int odd=0,even=1;
    int i=1;
    int temp = k/2;
    k--;
    while(i<n && k>=temp)
    {
        if(odd==1)
        {
            odd=0,even=1;
            i++;
            k--;
        }
        else
        {
            while(counter!=v[i] && n-i>=k)
            {
                i++;
            }
            if(counter!=v[i])
            {
                cout<<counter<<endl;
                return;
            }
            i++;
            counter++;
            k--;
            odd=1,even=0;
        }
    }
    cout<<counter<<endl;
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