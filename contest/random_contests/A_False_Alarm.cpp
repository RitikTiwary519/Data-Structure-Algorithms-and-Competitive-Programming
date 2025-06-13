#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int ans =0;
    int fl=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            ans++;
        }
        else
        {
            if(fl==0)
            {
                i+=(m-1);
                ans+=(m-1);
                fl=1;
            }
            else
            {
                break;
            }
        }
    }
    // cout<<ans<<endl;
    if(ans>=n-1)
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