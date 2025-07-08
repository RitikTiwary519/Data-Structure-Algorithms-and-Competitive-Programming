#include <bits/stdc++.h>
using namespace std;
#define ritik_tiwary ios_base::sync_with_stdio(false); cin.tie(NULL);

// Count number of increasing segments in terms of position of sorted elements
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        pos[v[i]] = i;
    }

    int cnt = 1; // at least one segment
    for (int i = 2; i <= n; i++) {
        if (pos[i] < pos[i - 1]) {
            cnt++; // need a new segment
        }
    }

    cout << cnt << "\n";
}

int main()
{
    ritik_tiwary
    int t = 1;
    while (t--) {
        solve();
    }
}
