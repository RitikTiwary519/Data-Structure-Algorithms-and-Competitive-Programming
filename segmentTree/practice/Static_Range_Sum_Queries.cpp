#include <bits/stdc++.h>
#define ll long long
#define int ll
#define rsrt sort(v.rbegin(), v.rend());
#define input                  \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        v.push_back(x);        \
    }
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define deb(v)            \
    for (auto &i : v)     \
    {                     \
        cout << i << ' '; \
    }
#define arrinput               \
    for (ll i = 0; i < n; i++) \
    {                          \
        cin >> arr[i];         \
    }
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)
using namespace std;

// class SegmentTree {
// public:
//     vector<int> st;

//     SegmentTree(int n) {
//         st.resize(4 * n);
//     }

//     void build(int ind, int lo, int hi, vector<int>& arr) {
//         if (lo == hi) {
//             st[ind] = arr[lo];
//             return;
//         }
//         int mid = (lo + hi) >> 1;
//         build(2 * ind + 1, lo, mid, arr);
//         build(2 * ind + 2, mid + 1, hi, arr);
//         st[ind] = st[2 * ind + 1] + st[2 * ind + 2];
//     }

//     int query(int ind, int lo, int hi, int l, int r) {
//         if (lo > r || hi < l) {
//             return 0;
//         }

//         if (lo >= l && hi <= r) {
//             return st[ind];
//         }

//         int mid = (lo + hi) >> 1;
//         int left = query(2 * ind + 1, lo, mid, l, r);
//         int right = query(2 * ind + 2, mid + 1, hi, l, r);
//         return left + right;
//     }
// };

class FenwickTree {
    vector<int> bit;
    int n;

public:
    FenwickTree(int _n) {
        n = _n;
        bit.assign(n + 1, 0); 
    }
    
    void update(int id, int val) {
        while (id <= n) {
            bit[id] += val;
            id += (id & -id);
        }
    }

    int query(int id) {
        int sum = 0;
        while (id > 0) {
            sum += bit[id];
            id -= (id & -id);
        }
        return sum;
    }
};

void solve() {
    int n, q;
    cin >> n >> q;
    FenwickTree ft(n);
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ft.update(i + 1, x);  // Convert 0-based index to 1-based
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << ft.query(b) - ft.query(a - 1) << endl; // Proper range sum query
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}
