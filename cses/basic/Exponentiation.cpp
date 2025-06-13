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

const int mod = 1e9+7;

int exp(int n, int m) {
    if (m == 0) return 1;
    int half = exp(n, m / 2);
    int result = (half * half) % mod;
    if (m % 2 == 1)
        result = (result * n) % mod;
    return result;
}


signed main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<exp(n,m)<<endl;
    }
    
}