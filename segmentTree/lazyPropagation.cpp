#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SGT {
    vector<int> seg;
    vector<int> lazy;

public:
    SGT(int n) {
        seg.resize(4 * n + 1);
        lazy.resize(4 * n + 1, 0);
    }

    void build(int ind, int lo, int hi, int arr[]) {
        if (lo == hi) {
            seg[ind] = arr[lo];
            return; // Base case should return here
        }

        int mid = (lo + hi) / 2;

        build(2 * ind + 1, lo, mid, arr);
        build(2 * ind + 2, mid + 1, hi, arr);

        seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
    }

    void propagate(int ind, int lo, int hi) {
        if (lazy[ind] != 0) {
            seg[ind] += lazy[ind]; // Apply the lazy value
            if (lo != hi) { // If not a leaf node
                lazy[2 * ind + 1] += lazy[ind];
                lazy[2 * ind + 2] += lazy[ind];
            }
            lazy[ind] = 0; // Reset the lazy value
        }
    }

    int query(int ind, int lo, int hi, int l, int r) {
        propagate(ind, lo, hi); // Ensure any pending updates are applied

        // No overlapping condition 
        if (lo > r || hi < l) {
            return INT_MAX;
        }

        // Complete overlapping condition
        if (lo >= l && hi <= r) {
            return seg[ind];
        }

        int mid = (lo + hi) / 2;

        int left = query(2 * ind + 1, lo, mid, l, r);
        int right = query(2 * ind + 2, mid + 1, hi, l, r);

        return min(left, right);
    }

    void update(int ind, int lo, int hi, int l, int r, int val) {
        propagate(ind, lo, hi); // Ensure any pending updates are applied

        // No overlapping
        if (lo > r || hi < l) {
            return;
        }

        // Complete overlapping
        if (l <= lo && hi <= r) {
            seg[ind] += val;
            if (lo != hi) {
                lazy[2 * ind + 1] += val;
                lazy[2 * ind + 2] += val;
            }
            return;
        }

        int mid = (lo + hi) / 2;

        update(2 * ind + 1, lo, mid, l, r, val);
        update(2 * ind + 2, mid + 1, hi, l, r, val);

        seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    SGT st(n);
    st.build(0, 0, n - 1, arr);

    while (m--) {
        int type;
        cin >> type;
        if (type == 1) { // Update query
            int l, r, val;
            cin >> l >> r >> val;
            l--, r--;
            st.update(0, 0, n - 1, l, r, val);
        } else if (type == 2) { // Range minimum query
            int l, r;
            cin >> l >> r;
            l--, r--;
            cout << st.query(0, 0, n - 1, l, r) << endl;
        }
    }

    return 0;
}
