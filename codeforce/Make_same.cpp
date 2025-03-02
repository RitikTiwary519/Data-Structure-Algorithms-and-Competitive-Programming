#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

bool comp(pair<string, int> &a, pair<string, int> &b) {
    return a.second > b.second; // Sort in decreasing order of '1' count
}

void solve() {
    int n;
    cin >> n;
    vector<pair<string, int>> v(3);
    int totalOnes = 0;

    for (int i = 0; i < 3; i++) {
        string str;
        cin >> str;
        int onesCount = count(str.begin(), str.end(), '1'); // Count '1's
        v[i] = {str, onesCount};
        totalOnes += onesCount;
    }

    if (totalOnes % n != 0) { // If ones cannot be evenly divided among strings
        cout << -1 << '\n';
        return;
    }

    sort(v.begin(), v.end(), comp); // Sort by '1' count (descending)
    int targetOnes = totalOnes / n; // Each string should have these many '1's
    int swaps = 0;

    for (int i = 0; i < targetOnes; i++) {
        int excess =n - v[i].second ;
        swaps += abs(excess); // Sum of absolute differences
    }

    cout << swaps << '\n'; // Since each swap fixes two positions
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
