#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ritik_tiwary ios_base::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> v(m), diff(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < m - 1; i++) {
        diff[i] = v[i + 1] - v[i] - 1;
    }

    diff[m - 1] = n - (v[m - 1] - v[0] + 1);
    sort(diff.begin(), diff.end(), greater<int>());

    int day = 0, save = 0;
    for (int i = 0; i < m; i++) {
        int canSave = diff[i] - 2 * day;
        if (canSave <= 0) break;
        save += max(1LL, canSave - 1);
        day += 2;
    }

    cout << n - save << endl;
}

signed main() {
    ritik_tiwary
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
