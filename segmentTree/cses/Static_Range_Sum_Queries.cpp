// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // #define ll long long

// // // class SGT{
// // //     vector<int> seg;
// // //     SGT(int n)
// // //     {
// // //         seg.resize(4*n+1);
// // //     }

// // //     void build(int ind,int lo,int hi,int arr[])
// // //     {
// // //         if(lo==hi)
// // //         {
// // //             seg[ind]=arr[lo];
// // //             return;
// // //         }

// // //         int mid=(lo+hi)/2;

// // //         build(2*ind+1,lo,mid,arr);
// // //         build(2*ind+2,mid+1,hi,arr);

// // //         seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
// // //     }

// // //     int query(int ind,int lo,int hi,int l,int r)
// // //     {
// // //         //no overlapping condition 
// // //         if(lo>r || hi<l)
// // //         {
// // //             return INT_MAX;
// // //         }

// // //         //complete overlapping
// // //         else if(lo<=l && r<=hi)
// // //         {
// // //             return seg[ind];
// // //         }

// // //         else
// // //         {
// // //             int mid=(lo+hi)/2;

// // //             int left=query(2*ind+1,lo,mid,l,r);
// // //             int right=query(2*ind+2,mid+1,hi,l,r);

// // //             return min(left,right);
// // //         }
// // //     }

// // //     void update(int ind,int lo,int hi,int i,int val)
// // //     {
// // //         if(lo==hi) 
// // //         {
// // //             seg[ind]=val;
// // //         }
// // //         int mid=(lo+hi)/2;

// // //         if(i<mid)
// // //         {
// // //             update(2*ind+1,lo,mid,i,val);
// // //         }
// // //         else
// // //         {
// // //             update(2*ind+2,mid+1,hi,i,val);
// // //         }
// // //         seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
// // //     }
// // // };



// #include <bits/stdc++.h>
// #define ll long long
// #define rsrt sort(v.rbegin(), v.rend());
// #define input                  \
//     for (ll i = 0; i < n; i++) \
//     {                          \
//         ll x;                  \
//         cin >> x;              \
//         v.push_back(x);        \
//     }
// #define mp make_pair
// #define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define srt sort(v.begin(), v.end());
// #define deb(v)            \
//     for (auto &i : v)     \
//     {                     \
//         cout << i << ' '; \
//     }
// #define arrinput               \
//     for (ll i = 0; i < n; i++) \
//     {                          \
//         cin >> arr[i];         \
//     }
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// using namespace std;
// #define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
// #define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

// // class SGT{
// //     vector<int> seg;

// // public:
// //     SGT(int n)
// //     {
// //         seg.resize(4*n+1);
// //     }

// //     void build(int ind, int lo, int hi, vector<int> arr)
// //     {
// //         if (lo == hi)
// //         {
// //             seg[ind] = arr[lo];
// //             return; // Base case should return here
// //         }

// //         int mid = (lo + hi) / 2;

// //         build(2*ind + 1, lo, mid, arr);
// //         build(2*ind + 2, mid + 1, hi, arr);

// //         seg[ind] = (seg[2*ind + 1] + seg[2*ind + 2]);
// //     }

// //     int query(int ind, int lo, int hi, int l, int r)
// //     {
// //         // No overlapping condition 
// //         if (lo > r || hi < l)
// //         {
// //             return 0;
// //         }

// //         // Complete overlapping condition
// //         if (lo >= l && hi <= r)
// //         {
// //             return seg[ind];
// //         }

// //         int mid = (lo + hi) / 2;

// //         int left = query(2*ind + 1, lo, mid, l, r);
// //         int right = query(2*ind + 2, mid + 1, hi, l, r);

// //         return left + right;
// //     }

// //     void update(int ind, int lo, int hi, int i, int val)
// //     {
// //         if (lo == hi) 
// //         {
// //             seg[ind] = val;
// //             return; // Base case should return here
// //         }

// //         int mid = (lo + hi) / 2;

// //         if (i <= mid)
// //         {
// //             update(2*ind + 1, lo, mid, i, val);
// //         }
// //         else
// //         {
// //             update(2*ind + 2, mid + 1, hi, i, val);
// //         }
// //         seg[ind] = (seg[2*ind + 1] + seg[2*ind + 2]);
// //     }
// // };


// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     vector<int> v(n);

//     forn(i,0,n) cin>>v[i];

//     SGT st(n);
//     st.build(0,0,n-1,v);
//     while (m--)
//     {
//         int x,y;
//         cin>>x>>y;
//         x--,y--;
//         cout<<st.query(0,0,n-1,x,y)<<endl;     
//     }    
// }

// #include <bits/stdc++.h>
// #define ll long long
// #define rsrt sort(v.rbegin(), v.rend());
// #define input                  \
//     for (ll i = 0; i < n; i++) \
//     {                          \
//         ll x;                  \
//         cin >> x;              \
//         v.push_back(x);        \
//     }
// #define mp make_pair
// #define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define srt sort(v.begin(), v.end());
// #define deb(v)            \
//     for (auto &i : v)     \
//     {                     \
//         cout << i << ' '; \
//     }
// #define arrinput               \
//     for (ll i = 0; i < n; i++) \
//     {                          \
//         cin >> arr[i];         \
//     }
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// using namespace std;
// #define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
// #define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

// class SGT {
//     vector<int> seg;

// public:
//     SGT(int n) {
//         seg.resize(4 * n + 1);
//     }

//     void build(int ind, int lo, int hi, int arr[]) {
//         if (lo == hi) {
//             seg[ind] = arr[lo];
//             return; // Base case should return here
//         }

//         int mid = (lo + hi) / 2;

//         build(2 * ind + 1, lo, mid, arr);
//         build(2 * ind + 2, mid + 1, hi, arr);

//         seg[ind] = (seg[2 * ind + 1] + seg[2 * ind + 2]);
//     }

//     int query(int ind, int lo, int hi, int l, int r) {
//         // No overlapping condition 
//         if (lo > r || hi < l) {
//             return 0;
//         }

//         // Complete overlapping condition
//         if (lo >= l && hi <= r) {
//             return seg[ind];
//         }

//         int mid = (lo + hi) / 2;

//         int left = query(2 * ind + 1, lo, mid, l, r);
//         int right = query(2 * ind + 2, mid + 1, hi, l, r);

//         return left + right;
//     }

//     void update(int ind, int lo, int hi, int i, int val) {
//         if (lo == hi) {
//             seg[ind] = val;
//             return; // Base case should return here
//         }

//         int mid = (lo + hi) / 2;

//         if (i <= mid) {
//             update(2 * ind + 1, lo, mid, i, val);
//         } else {
//             update(2 * ind + 2, mid + 1, hi, i, val);
//         }
//         seg[ind] = (seg[2 * ind + 1] + seg[2 * ind + 2]);
//     }
// };

// int main() {
//     int n, m;
//     cin >> n >> m;
//     int v[n];

//     forn(i, 0, n) cin >> v[i];

//     SGT st(n);
//     st.build(0, 0, n - 1, v);

//     while (m--) {
//         int x, y;
//         cin >> x >> y;
//         x--, y--;
//         cout << st.query(0, 0, n - 1, x, y) << endl;
//     }

//     return 0;
// }


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

class SGT {
    vector<ll> seg;

public:
    SGT(ll n) {
        seg.resize(4 * n + 1);
    }

    void build(ll ind, ll lo, ll hi, ll arr[]) {
        if (lo == hi) {
            seg[ind] = arr[lo];
            return; // Base case should return here
        }

        ll mid = (lo + hi) / 2;

        build(2 * ind + 1, lo, mid, arr);
        build(2 * ind + 2, mid + 1, hi, arr);

        seg[ind] = (seg[2 * ind + 1] + seg[2 * ind + 2]);
    }

    ll query(ll ind, ll lo, ll hi, ll l, ll r) {
        // No overlapping condition 
        if (lo > r || hi < l) {
            return 0;
        }

        // Complete overlapping condition
        if (lo >= l && hi <= r) {
            return seg[ind];
        }

        ll mid = (lo + hi) / 2;

        ll left = query(2 * ind + 1, lo, mid, l, r);
        ll right = query(2 * ind + 2, mid + 1, hi, l, r);

        return left + right;
    }

    void update(ll ind, ll lo, ll hi, ll i, ll val) {
        if (lo == hi) {
            seg[ind] = val;
            return; // Base case should return here
        }

        ll mid = (lo + hi) / 2;

        if (i <= mid) {
            update(2 * ind + 1, lo, mid, i, val);
        } else {
            update(2 * ind + 2, mid + 1, hi, i, val);
        }
        seg[ind] = (seg[2 * ind + 1] + seg[2 * ind + 2]);
    }
};
int main() {
    ll n, m;
    cin >> n >> m;
    ll v[n];

    forn(i, 0, n) cin >> v[i];

    SGT st(n);
    st.build(0, 0, n - 1, v);

    while (m--) {
        ll x, y;
        cin >> x >> y;
        x--, y--;
        cout << st.query(0, 0, n - 1, x, y) << endl;
    }

    return 0;
}
