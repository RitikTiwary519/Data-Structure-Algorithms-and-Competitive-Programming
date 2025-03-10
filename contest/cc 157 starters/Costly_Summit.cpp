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
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, C;
        cin >> N >> C;
        string s;
        cin >> s;
        

        vector<int> freq(5, 0);
        for (char ch : s) {
            freq[ch - 'A']++;
        }
        
        long long ans = LLONG_MAX;
 
        for (int mask = 0; mask < (1 << 5); mask++) {
            int LC = __builtin_popcount(mask); 
            int TN = 0; 
            
            
            for (int i = 0; i < 5; i++) {
                if (!(mask & (1 << i))) {
                    TN += freq[i];
                }
            }
           
            long long translatorCost = (long long)TN * (TN + 1LL) / 2;
            long long totalCost = (long long)LC * C + translatorCost;
            ans = min(ans, totalCost);
        }
        cout << ans << "\n";
    }
    
    return 0;
}
