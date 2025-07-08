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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());

    int i=0,j=n-1;
    int ans=0;
    while(i<=j)
    {
        if(i==j) 
        {
            ans++;
            i++,j--;
            continue;
        }
        if(a[i]+a[j]<=m)
        {
            i++;
            j--;
            ans++;
        }
        else
        {
            j--;
            ans++;
        }
    }

    cout<<ans<<endl;
}

int main() {
    int t;
    t=1;
    while (t--)
    {
        solve();
    } 
}
