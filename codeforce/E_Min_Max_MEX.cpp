#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define rsrt sort(v.rbegin(), v.rend());
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)
 

bool answer(const vector<int>& a, int k, int vec) {
    int segments = 0;
    vector<bool> seen(vec, false);
    int count = 0;
    for (int num : a) {

        if (num < vec && !seen[num]) {
            seen[num] = true;
            count++;
        }

        if (count == vec) {
            segments++;
            fill(seen.begin(), seen.end(), false);
            count = 0;
        }
    }
    return segments >= k;
}
 
signed main(){
    ritik_tiwary
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        int low = 0, high = n + 1, ans = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;

            if(answer(a, k, mid)){
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}
