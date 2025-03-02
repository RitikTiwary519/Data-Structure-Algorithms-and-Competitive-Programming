#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int b;
    cin >> b;  


    vector<vector<int>> dp(n, vector<int>(2, INT_MAX));


    dp[0][0] = a[0];          
    dp[0][1] = b - a[0];     


    for (int i = 1; i < n; i++) {
        if (dp[i-1][0] <= a[i]) dp[i][0] = a[i];  
        if (dp[i-1][0] <= b - a[i]) dp[i][1] = b - a[i];  

        if (dp[i-1][1] <= a[i]) dp[i][0] = min(dp[i][0], a[i]);
        if (dp[i-1][1] <= b - a[i]) dp[i][1] = min(dp[i][1], b - a[i]); 
    }

    if (dp[n-1][0] != INT_MAX || dp[n-1][1] != INT_MAX) yes
    else no
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
