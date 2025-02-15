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
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
using namespace std;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

void solve()
{
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    
    int score=0;
    int val=0;
    int fl=0;

    if(n%2==1)
    {
        no
        return;
    }

    for(auto it: mp)
    {
        int x=it.first;
        int y=it.second;
        if(fl==0)
        {
            if(y==1)
            {
                no
                return;
            }
            else
            {
                score=y-2;
                val=x;
            }
            fl=1;
        }
        else
        {
            if(y%2==0)
            {
                score=y-2;
                val=x;
            }
            else
            {
                if(x-val<=score)
                {
                    val=x;
                    score-=(x-val);
                }
                else
                {
                    no
                    return;
                }
            }
        }
    }
    yes
    return;

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