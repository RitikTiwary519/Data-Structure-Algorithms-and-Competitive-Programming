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

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    multiset<int> ms(a.begin(), a.end()); // allows duplicates
    vector<int> ansarr(m, -1);

    for (int i = 0; i < m; i++) {
        auto it = ms.lower_bound(b[i]); // first a[i] >= b[i]
        if (it != ms.end()) {
            ansarr[i] = *it;
            ms.erase(it); // remove to mark as used
        }
    }

    for (auto x : ansarr) cout << x << "\n";
}


int main(){
    int t;
    t=1;
    while (t--)
    {
        solve();
    }
    
}