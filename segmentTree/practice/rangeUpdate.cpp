#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define fo(i, a, b) for (ll i = a; i <= b; i++)
#define vll vector<ll>
#define mod 1000000007

struct SegmentTree {
    vll sg, lp;
    ll n;

    SegmentTree(ll size) {
        n = size;
        sg.resize(4 * n, 0);
        lp.resize(4 * n, 0);
    }

    void build(vll &v, ll l, ll r, ll u) {
        if (l == r) {
            sg[u] = v[l];
            return;
        }
        ll mid = (l + r) / 2;
        build(v, l, mid, 2 * u + 1);
        build(v, mid + 1, r, 2 * u + 2);
        sg[u] = sg[2 * u + 1] + sg[2 * u + 2];
    }

    void propagate(ll u, ll l, ll r) {
        if (lp[u] != 0) {
            sg[u] += lp[u] * (r - l + 1);
            if (l != r) {
                lp[2 * u + 1] += lp[u];
                lp[2 * u + 2] += lp[u];
            }
            lp[u] = 0;
        }
    }

    void update(ll l, ll r, ll rl, ll rr, ll u, ll val) {
        propagate(u, l, r);
        if (rr < l || rl > r) return;
        if (rl <= l && r <= rr) {
            lp[u] += val;
            propagate(u, l, r);
            return;
        }
        ll mid = (l + r) / 2;
        update(l, mid, rl, rr, 2 * u + 1, val);
        update(mid + 1, r, rl, rr, 2 * u + 2, val);
        sg[u] = sg[2 * u + 1] + sg[2 * u + 2];
    }

    ll query(ll l, ll r, ll idx, ll u) {
        propagate(u, l, r);
        if (l == r) return sg[u];
        ll mid = (l + r) / 2;
        if (idx <= mid) return query(l, mid, idx, 2 * u + 1);
        else return query(mid + 1, r, idx, 2 * u + 2);
    }
};

void solve() {
    ll n, q; cin >> n >> q;
    vll v(n);
    fo(i, 0, n - 1) cin >> v[i];

    SegmentTree seg(n);
    seg.build(v, 0, n - 1, 0);

    while (q--) {
        ll type; cin >> type;
        if (type == 1) {
            ll a, b, u; cin >> a >> b >> u;
            seg.update(0, n - 1, a - 1, b - 1, 0, u);
        } else {
            ll k; cin >> k;
            cout << seg.query(0, n - 1, k - 1, 0) << '\n';
        }
    }
}

int main() {
    solve();
    return 0;
}
