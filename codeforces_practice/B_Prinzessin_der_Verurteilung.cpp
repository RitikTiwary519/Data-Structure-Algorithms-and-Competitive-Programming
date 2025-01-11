#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    string str;
    cin >> n >> str;

    // Vector to track whether substrings of a specific length are unique
    vector<int> flag(n + 1, 0);
    vector<map<string, int>> v(n + 1);

    for (int len = 1; len <= n; len++) { // Iterate over substring lengths
        for (int i = 0; i <= n - len; i++) { // Iterate over starting indices for the substring
            string temp = str.substr(i, len);
            if (flag[len]==0 && v[len].find(temp) == v[len].end()) {
                v[len][temp] = 1; // Mark substring as seen
            } else {
                flag[len] = 1; // Mark the length as having repeated substrings
            }
        }
    }

    // Find the smallest length with a unique substring
    for (int len = 1; len <= n; len++) {
        if (flag[len] == 0) { // Length `len` has no repeated substrings
            cout << v[len].begin()->first << endl;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
