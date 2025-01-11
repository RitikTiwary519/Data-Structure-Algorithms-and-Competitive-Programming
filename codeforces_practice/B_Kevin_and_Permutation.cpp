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

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n, 0); // Initialize vector with size `n` and all elements set to 0
    int counter = 1;
    int placer = 0;

    // Placing lower n/k values at ceil(n/k) places
    for (int i = k-1; i < n; i += k) {
        v[i] = counter;
        counter++;
    }

    // Placing remaining values in remaining positions
    while (counter <= n) {
        if (v[placer] == 0) {
            v[placer] = counter;
            counter++;
        }
        placer++;
    }

    // Output the final vector
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
