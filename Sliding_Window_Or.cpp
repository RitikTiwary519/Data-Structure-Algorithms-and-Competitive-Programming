// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define rsrt sort(v.rbegin(), v.rend());
// #define mp make_pair
// #define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define srt sort(v.begin(), v.end());
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
// #define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

// void solve()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> v(n, 0);
//     int x, a, b, c;
//     cin >> x >> a >> b >> c;
//     v[0] = x;
//     for (int i = 1; i < n; i++) {
//         v[i] = (1ll * a * v[i - 1] + b) % c;
//     }

//     vector<int> cnt(31, 0);
//     int curr = 0;

//     auto add = [&](int j) {
//         for(int i=0;i<=31;i++) {
//             if(v[j] & (1 << i)) {
//                 cnt[i]++;
//             }
//         }
//     };

//     auto remove = [&](int j) {
//         for(int i=0;i<=31;i++) {
//             if(v[j] & (1 << i)) {
//                 cnt[i]--;
//             }
//         }
//     };

//     auto get_curr = [&]() {
//         int result=0;
//         for(int i=0;i<=31;i++) {
//             if(cnt[i] > 0) {
//                 result |= (1 << i);
//             }
//         }
//         return result;
//     };

//     int ans = 0;
//     int i =0,j = 0;
//     while(j<n) {
//         if(j == 0) {
//             while(j < m) {
//                 add(j);
//                 j++;
//             }
//             // cout<<get_curr() << endl;
//             ans = get_curr();
//             // cout << ans << endl;
//         } else {
//             remove(i);
//             add(j);
//             i++, j++;
//             // cout << get_curr() << endl;
//             // cout<<get_curr() << endl;

//             ans ^= get_curr();
//         }
//     }

//     cout<<ans<<endl;
    

// }


// int main() {
//     ritik_tiwary
//     int t = 1;
//     // cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ritik_tiwary ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    int x, a, b, c;
    cin >> x >> a >> b >> c;

    v[0] = x;
    for (int i = 1; i < n; i++) {
        v[i] = (1LL * a * v[i - 1] + b) % c;
    }

    vector<int> cnt(32, 0);  // 0 to 31 bits

    auto add = [&](int j) {
        for (int i = 0; i <= 31; i++) {
            if (v[j] & (1 << i)) {
                cnt[i]++;
            }
        }
    };

    auto remove = [&](int j) {
        for (int i = 0; i <= 31; i++) {
            if (v[j] & (1 << i)) {
                cnt[i]--;
            }
        }
    };

    auto get_curr = [&]() {
        int result = 0;
        for (int i = 0; i <= 31; i++) {
            if (cnt[i] > 0) {
                result |= (1 << i);
            }
        }
        return result;
    };

    int ans = 0;

    for (int i = 0; i < m; i++) {
        add(i);
    }

    ans = get_curr();  // first window

    for (int i = m; i < n; i++) {
        remove(i - m);
        add(i);
        ans ^= get_curr();
    }

    cout << ans << endl;
}

int main()
{
    ritik_tiwary
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
