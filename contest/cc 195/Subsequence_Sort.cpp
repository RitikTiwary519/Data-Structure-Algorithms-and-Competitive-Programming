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

bool can_sort_with_full(const vector<ll>& A, ll FULL) {
    ll prev = 0;
    for (ll x : A) {
        if (x >= prev) {
            prev = x;
        } else if ((x | FULL) >= prev) {

        } else {
            return false;
        }
    }
    return true;
}

int main(){
    ritik_tiwary

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<ll> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        bool sorted = true;
        for (int i = 1; i < N; i++) {
            if (A[i] < A[i-1]) {
                sorted = false;
                break;
            }
        }
        if (sorted) {
            cout << 0 << "\n";
            continue;
        }

        int lo = 0, hi = 30, ansB = 30;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            ll FULL = ((mid+1LL) >= 63 ? (ll)-1 : ((1LL << (mid+1)) - 1));
            if (can_sort_with_full(A, FULL)) {
                ansB = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        ll k = (1LL << ansB);
        cout << k << "\n";
    }
    return 0;
}
