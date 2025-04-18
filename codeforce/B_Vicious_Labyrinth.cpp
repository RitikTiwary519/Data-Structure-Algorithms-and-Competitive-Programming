#include <bits/stdc++.h>
#define ll long long
#define int ll
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
        long long k;
        cin >> n >> k;
        vector<int> f(n + 1);
        
        if(n == 2) {
            f[1] = 2;
            f[2] = 1;
        } else {
            if(k % 2 == 1) {
                for (int i = 1; i <= n - 1; i++) {
                    f[i] = n;
                }
                f[n] = n - 1;
            } else {

                for (int i = 1; i <= n - 2; i++) {
                    f[i] = n - 1;
                }
                f[n - 1] = n;
                f[n] = n - 1;
            }
        }
        for (int i = 1; i <= n; i++){
            cout << f[i] << (i == n ? "\n" : " ");
        }    
}
 
signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
