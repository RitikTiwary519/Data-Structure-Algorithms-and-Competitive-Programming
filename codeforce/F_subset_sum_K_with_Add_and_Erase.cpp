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

void add(vector<int> &dp,char var)
{
    int val = var-'0';
}
void remove(vector<int> &dp,char var)
{
    int val = var-'0';
}

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<string> v(n);
    vector<int> dp(n+1,0);

    forn(i,0,n)
    {
        string temp;
        cin>>temp;
        
        if(temp[0]=='+')
        {
            add(dp,temp[2]);
        }
        else
        {
            remove(dp,temp[2]);
        }
    } 


}

int main()
{
    solve();
}