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
#define ritik_tiwary ios_base::sync_with_stdio(false); cin.tie(NULL);
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

// Function to solve for a subset of size `j` with a given `k`
int solve(vector<int>& v, int j, int k) {
    int i = 0, ans = 0;
    sort(v.begin(), v.begin() + j); // Sort only the first `j` elements
    while (k > 0 && i < j) {
        if (i == j - 1) {
            if (k >= v[i]) {
                ans++;
                k -= v[i];
            }
            break;
        }
        if (k >= v[i + 1]) {
            k -= v[i + 1];
            ans += 2;
            i += 2;
        } else if (k >= v[i]) {
            k -= v[i];
            ans++;
            i++;
        } else {
            break;
        }
    }
    return ans;
}

// Function to find the maximum number of elements that can be picked
int coderRitik() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    forn(i, 0, n) cin >> v[i];

    int maxi = 0;
    vector<int> temp;

    for (int i = 0; i < n; i++) {
        temp.push_back(v[i]);
        maxi = max(maxi, solve(temp, i + 1, k));
    }

    cout << maxi << endl; // Output the maximum number of elements picked
    return maxi;
}

int main() {
    ritik_tiwary; // Fast input/output
    int t = 1;
    while (t--) {
        coderRitik();
    }
    return 0;
}
