#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int N;
    ll X;
    cin >> N >> X;

    vector<ll> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    // Precompute suffix maximum of A
    vector<ll> maxSuffix(N + 1, 0);  // maxSuffix[i] = max(A[i], A[i+1], ..., A[N-1])
    for (int i = N - 1; i >= 0; i--) {
        maxSuffix[i] = max(A[i], maxSuffix[i + 1]);
    }

    int ans = 0;
    ll currX = X;

    for (int i = 0; i < N; i++) {
        if (currX >= B[i] && ((i==N-1) || maxSuffix[i + 1] < currX)) {
            currX--;  // Parry this attack
            ans++;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
