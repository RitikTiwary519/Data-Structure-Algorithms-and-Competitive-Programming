// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // #define rsrt sort(v.rbegin(), v.rend());
// // #define mp make_pair
// // #define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
// // #define srt sort(v.begin(), v.end());
// // #define yes cout << "YES" << endl;
// // #define no cout << "NO" << endl;
// // #define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
// // #define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

// // bool check_consistency(int n, const vector<ll>& a) {
// //     if (n == 2) return true; // Any two equations always solvable uniquely

// //     // Build first two equations:
// //     // a1 = a*1 + b*(n-1+1) = a*1 + b*n
// //     // a2 = a*2 + b*(n-2+1) = a*2 + b*(n-1)

// //     ll A1 = 1, B1 = n, C1 = a[0];         // Equation 1: A1*a + B1*b = C1
// //     ll A2 = 2, B2 = n - 1, C2 = a[1];     // Equation 2: A2*a + B2*b = C2

// //     ll det = A1 * B2 - A2 * B1;
// //     if (det == 0) return false; // No unique solution

// //     // Solve using Cramer's Rule
// //     ll detA = C1 * B2 - C2 * B1;
// //     ll detB = A1 * C2 - A2 * C1;

// //     // Now a = detA / det, b = detB / det
// //     if (detA % det != 0 || detB % det != 0)
// //         return false;

// //     ll a_val = detA / det;
// //     ll b_val = detB / det;

// //     // Check if a_val and b_val satisfy all equations
// //     for (int i = 0; i < n; ++i) {
// //         ll lhs = a[i];
// //         ll rhs = a_val * (i + 1) + b_val * (n - i);
// //         if (lhs != rhs) return false;
// //     }

// //     return true;
// // }

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         int n;
// //         cin >> n;
// //         vector<ll> arr(n);
// //         for (int i = 0; i < n; ++i) 
// //             cin >> arr[i];

// //         if (n == 2) {
// //             ll x = arr[0], y = arr[1];
// //             // whatever your condition really is; for example:
// //             bool ok = (abs(x - y) <= 2);
// //             cout << (ok ? "YES\n" : "NO\n");
// //             continue;     // go on to the next test case
// //         }

// //         // otherwise use your consistency checker
// //         cout << (check_consistency(n, arr) ? "YES\n" : "NO\n");
// //     }

// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// bool canExplode(const vector<ll>& arr) {
//     int n = arr.size();
//     // Build the first two equations:
//     //   eq1: arr[0] = a*1 + b*(n-1+1) = a*1 + b*n
//     //   eq2: arr[1] = a*2 + b*(n-2+1) = a*2 + b*(n-1)
//     ll A1 = 1,    B1 = n,     C1 = arr[0];
//     ll A2 = 2,    B2 = n - 1, C2 = arr[1];

//     // determinant
//     ll det = A1 * B2 - A2 * B1;
//     if (det == 0) return false;  // no unique solution

//     // Cramer's rule
//     ll detA = C1 * B2 - C2 * B1;
//     ll detB = A1 * C2 - A2 * C1;

//     // a = detA / det, b = detB / det must be integer
//     if (detA % det != 0 || detB % det != 0)
//         return false;

//     ll a = detA / det;
//     ll b = detB / det;

//     // verify against all positions i = 1..n
//     for (int i = 0; i < n; ++i) {
//         // arr[i] == a*(i+1) + b*(n - i)
//         ll want = a * (i + 1) + b * (n - i);
//         if (want != arr[i]) return false;
//     }
//     return true;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<ll> arr(n);
//         for (ll &x : arr) {
//             cin >> x;
//         }
        
//         // For n==2, our general method still works:
//         // it solves the 2x2 system and checks both equations.
//         cout << (canExplode(arr) ? "YES\n" : "NO\n");
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool canExplode(const vector<ll>& arr) {
    int n = arr.size();
    if(n==2)
    
    // Equations for i=1 and i=2:
    //   arr[0] = a*1 + b*n
    //   arr[1] = a*2 + b*(n-1)
    ll A1 = 1,    B1 = n,     C1 = arr[0];
    ll A2 = 2,    B2 = n - 1, C2 = arr[1];

    ll det = A1 * B2 - A2 * B1;
    if (det == 0) return false;

    ll detA = C1 * B2 - C2 * B1;
    ll detB = A1 * C2 - A2 * C1;
    if (detA % det != 0 || detB % det != 0)
        return false;

    // For n == 2, that's all we need:
    if (n == 2) return true;

    // Otherwise verify across all positions:
    ll a = detA / det;
    ll b = detB / det;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != a * (i + 1) + b * (n - i))
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (ll &x : arr) cin >> x;
        cout << (canExplode(arr) ? "YES\n" : "NO\n");
    }
    return 0;
}
