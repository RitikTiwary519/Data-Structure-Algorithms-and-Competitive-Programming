#include <bits/stdc++.h>
#define ll long long
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
#define ford(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)

class info {
    public:
    int open;
    int close;
    int full;

    public:
    info(int _open, int _close, int _full) {
        open = _open;
        close = _close;
        full = _full;
    }
    info() {
        open = 0;
        close = 0;
        full = 0;
    }
};

void merge(info &a1, info &a2, info &b1) {
    int f = a1.full + a2.full + min(a1.open, a2.close);
    int o = a1.open + a2.open - min(a1.open, a2.close);
    int c = a1.close + a2.close - min(a1.open, a2.close);

    b1.close = c;
    b1.full = f;
    b1.open = o;
    return;
}

void build(int ind, int lo, int hi, vector<info> &seg, string &str) {
    if (lo == hi) {
        seg[ind].full = 0;
        seg[ind].open = (str[lo] == '(');
        seg[ind].close = (str[lo] == ')');
        return;
    }

    int mid = (lo + hi) / 2;
    build(2 * ind + 1, lo, mid, seg, str);
    build(2 * ind + 2, mid + 1, hi, seg, str);
    merge(seg[2 * ind + 1], seg[2 * ind + 2], seg[ind]);
}

info merge(info &a1, info &a2) {
    info temp = info(0, 0, 0);
    int f = a1.full + a2.full + min(a1.open, a2.close);
    int o = a1.open + a2.open - min(a1.open, a2.close);
    int c = a1.close + a2.close - min(a1.open, a2.close);

    temp.close = c;
    temp.open = o;
    temp.full = f;

    return temp;
}

info query(int ind, int lo, int hi, int l, int r, vector<info> &seg) {
    if (r < lo || hi < l) return info();
    if (lo >= l && hi <= r) return seg[ind];
    int mid = (lo + hi) / 2;
    info left = query(2 * ind + 1, lo, mid, l, r, seg);
    info right = query(2 * ind + 2, mid + 1, hi, l, r, seg);

    return merge(left, right);
}

int main() {
    int t;
    t = 1;
    while (t--) {
        string str;
        cin >> str;
        int n = str.size();
        vector<info> seg(4 * n + 1);

        int q;
        cin >> q;
        build(0, 0, n - 1, seg, str);
        while (q--) {
            int x, y;
            cin >> x >> y;
            x--, y--;
            info ans = query(0, 0, n - 1, x, y, seg);
            cout <<2* ans.full << endl;
        }
    }

    return 0;
}
