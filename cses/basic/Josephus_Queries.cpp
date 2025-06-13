#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

#include <iostream>
#include <set>
using namespace std;

int findKthEliminated(int n, int k) {
    set<int> alive;
    for (int i = 1; i <= n; i++) alive.insert(i);

    auto it = alive.begin();
    while (k--) {
        // Move iterator by one (every 2nd person)
        it++;
        if (it == alive.end()) it = alive.begin();
        // Eliminate current child
        int removed = *it;
        it = alive.erase(it);
        if (it == alive.end()) it = alive.begin();
        if (k == 0) return removed;
    }
    return -1; // Shouldn't happen
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (n <= 1e5) // Only simulate for small n
            cout << findKthEliminated(n, k) << endl;
        else
            cout << "-1 (n too large for naive simulation)" << endl;
    }
}
