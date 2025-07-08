#include <bits/stdc++.h>
using namespace std;
#define int long long

// Fast modular exponentiation
int modpow(int a, int b, int mod) {
    int res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) res = (__int128)res * a % mod;
        a = (__int128)a * a % mod;
        b >>= 1;
    }
    return res;
}

// Miller-Rabin test
bool is_prime(int n) {
    if (n < 2) return false;
    int r = 0;
    int d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        r++;
    }

    // Witnesses good for n < 3,317,444,400,000,000,000
    for (int a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (a >= n) break;
        int x = modpow(a, d, n);
        if (x == 1 || x == n - 1) continue;

        bool ok = false;
        for (int i = 0; i < r - 1; i++) {
            x = (__int128)x * x % n;
            if (x == n - 1) {
                ok = true;
                break;
            }
        }
        if (!ok) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    int candidate = n + 1;
    while (true) {
        if (is_prime(candidate)) {
            cout << candidate << '\n';
            return;
        }
        candidate++;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
