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
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)


class SegmentTree {
public:
    vector<int> st;

    SegmentTree(int n) {
        st.resize(4 * n);
        for (int i = 0; i < 4*n; i++)
        {
            st[i]=INT_MAX;
        }
        
    }

    void build(int ind, int lo, int hi, vector<int>& arr) {
        if (lo == hi) {
            st[ind] = arr[lo];
            return;
        }
        int mid = (lo + hi) >> 1;
        build(2 * ind + 1, lo, mid, arr);
        build(2 * ind + 2, mid + 1, hi, arr);
        st[ind] = min(st[2 * ind + 1],st[2 * ind + 2]);
    }

    int query(int ind, int lo, int hi, int l, int r) {
        if (lo > r || hi < l) {
            return INT_MAX;
        }

        if (lo >= l && hi <= r) {
            return st[ind];
        }

        int mid = (lo + hi) >> 1;
        int left = query(2 * ind + 1, lo, mid, l, r);
        int right = query(2 * ind + 2, mid + 1, hi, l, r);
        return min(left,right);
    }
};

int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> arr(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    SegmentTree st(n);
    st.build(0,0,n-1,arr);
    while (q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<st.query(0,0,n-1,a-1,b-1)<<endl;
    }
    
}