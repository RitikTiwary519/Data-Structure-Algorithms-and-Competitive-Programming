// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// // Check if we can achieve a final painting where every cell with penalty > X is painted correctly
// // with at most k operations.
// bool canAchieve(int X, int k, const string &s, const vector<int> &a) {
//     int n = s.size();
//     int operations = 0;
//     int i = 0;
//     // Process the strip from left to right.
//     while (i < n) {
//         // Two cases where we do nothing:
//         // 1. a[i] <= X: unconstrained – even if wrong, its penalty is ≤ X.
//         // 2. a[i] > X but s[i]=='R': must remain red, so we must not paint it.
//         if (a[i] <= X || (s[i]=='R' && a[i] > X)) {
//             i++;
//             continue;
//         }
//         // Here: a[i] > X and s[i]=='B', so this cell must be painted blue.
//         // Start a new blue-paint segment.
//         operations++;
//         if (operations > k) return false;
//         // In a valid operation we can paint a contiguous segment, but we cannot include any cell 
//         // that must remain red (i.e. a[i] > X and s[i]=='R').
//         while (i < n && (a[i] <= X || (s[i]=='B' && a[i] > X))) {
//             i++;
//         }
//     }
//     return operations <= k;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
//     while(t--){
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         vector<int> a(n);
//         int maxA = 0;
//         for (int i = 0; i < n; i++){
//             cin >> a[i];
//             maxA = max(maxA, a[i]);
//         }
        
//         // Binary search on the maximum allowed penalty X.
//         int L = 0, R = maxA;
//         int ans = R;
//         while(L <= R){
//             int mid = (L + R) / 2;
//             if(canAchieve(mid, k, s, a)){
//                 ans = mid;
//                 R = mid - 1;
//             } else {
//                 L = mid + 1;
//             }
//         }
//         cout << ans << "\n";
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


bool check(int X, int k, const string &s, const vector<int> &a) {
    int n = s.size();
    int count = 0;
    int i = 0;

    while (i < n) {

        if (a[i] <= X || (s[i]=='R' && a[i] > X)) {
            i++;
            continue;
        }

        count++;
        if (count > k) return false;
        while (i < n && (a[i] <= X || (s[i]=='B' && a[i] > X))) {
            i++;
        }
    }
    return count <= k;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> a(n);
        int maxA = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            maxA = max(maxA, a[i]);
        }
        

        int L = 0, R = maxA;
        int ans = R;
        while(L <= R){
            int mid = (L + R) / 2;
            if(check(mid, k, s, a)){
                ans = mid;
                R = mid - 1;
            } else {
                L = mid + 1;
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}
