#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;                  cin >> n;
    string s;               cin >> s;
    s = ' ' + s;            // 1-based indexing (pad a dummy char)

    vector<char> gone(n + 1, 0);   // 0 = present, 1 = already removed
    ll ans = 0;

    for (int k = 1; k <= n; ++k) {
        for (int j = k; j <= n; j += k) {
            if (s[j] == '1') break;   // cannot use this k any further
            if (!gone[j]) {
                ans += k;
                gone[j] = 1;
            }
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) solve();
    return 0;
}