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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    ll ans = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        int j = i;
        while (j < n && v[i] == v[j]) {
            j++;
        }

        ll cost = v[i] * i + v[i] * (n - j);
        ans = min(ans, cost);
        i = j - 1;
    }


    if (ans == LLONG_MAX) {
        cout << 0 << "\n";
    } else {
        cout << ans << "\n";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
