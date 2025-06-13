#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define rsrt sort(v.rbegin(), v.rend());
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)


void solve(int n)
{
    if (n < 2) {
        cout << 0 << endl;
        return;
    }
    int nsq = n*n;
    int totalWays = (nsq)*(nsq-1)/2;
    int wrongWays = 4*(n-1)*(n-2);
    cout<<totalWays-wrongWays<<endl;

}

signed main()
{
    int t;
    cin>>t;
    int i=1;
    while (t--)
    {
        solve(i++);
    }
    
}