#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define yes cout << "YES\n";
#define no cout << "NO\n";

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int &x : v) cin >> x;

    vector<int> cnt(n + 5, 0);
    set<int> mex_candidates;

    for (int i = 0; i <= n + 1; ++i) mex_candidates.insert(i);

    // Initialize the first window
    for (int i = 0; i < m; ++i) {
        cnt[v[i]]++;
        if (cnt[v[i]] == 1) mex_candidates.erase(v[i]);
    }

    cout << *mex_candidates.begin() << " ";

    for (int i = m; i < n; ++i) {
        // Add new element
        cnt[v[i]]++;
        if (cnt[v[i]] == 1) mex_candidates.erase(v[i]);

        // Remove old element
        cnt[v[i - m]]--;
        if (cnt[v[i - m]] == 0) mex_candidates.insert(v[i - m]);

        cout << *mex_candidates.begin() << " ";
    }

    cout << "\n";
}

signed main() {
    ritik_tiwary
    int t = 1;
    // cin >> t; // for multiple test cases
    while (t--) solve();
}
