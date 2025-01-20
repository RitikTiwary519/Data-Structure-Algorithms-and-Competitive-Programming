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

int x1,y1;
int x2,y2;
int n;
string str;
unordered_map<char,int> mp;
mp['U']=1;
mp['D']=1;
mp['U']=1;
mp['U']=1;

bool fun(int mid,int day,string str)
{
    int n = str.size();
    int x3=x1,y3=y1;
    int i=0;
    while(x3!=x2 && y3!=y2 && mid>0)
    {
        if()
    }

}

void solve()
{
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>n;
    cin>>str;

    int lo = 0, hi = 1e9;

    while(lo<=hi)
    {
        int mid = lo+(hi-lo)/2;
        if()
    }

}

int main()
{
    solve();
}