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

int reduceUnique(vector<int>& arr, int budget) {
    unordered_map<int, int> countMap;

    for (int num : arr) {
        countMap[num]++;
    }

    vector<int> frequencyList;
    for (const auto& pair : countMap) {
        frequencyList.push_back(pair.second);
    }


    sort(frequencyList.begin(), frequencyList.end());


    int uniqueCount = frequencyList.size();
    for (int freq : frequencyList) {
        if (budget >= freq) {
            budget -= freq; 
            uniqueCount--;  
        } else {
            break; 
        }
    }

    return max(1, uniqueCount);
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int result = reduceUnique(v, k);
        cout << result << endl;
    }
}

int main() {

    solve();
    return 0;
}
