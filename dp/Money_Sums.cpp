#include <bits/stdc++.h>
#define ll long long
#define ritik_tiwary ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());  // Sorting the input

    int sum = accumulate(v.begin(), v.end(), 0);
    
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));
    dp[0][0] = 1;

    for (int j = 0; j < n; j++) {
        for (int i = sum; i >= 0; i--) {  // Iterate in reverse to avoid overwriting
            if (dp[j][i] == 1) {
                dp[j + 1][i + v[j]] = 1;
                dp[j + 1][i] = 1;
            }
        }
    }

    vector<int> possible_sums;
    for (int i = 1; i <= sum; i++) {
        if (dp[n][i] == 1) {
            possible_sums.push_back(i);
        }
    }

    cout << possible_sums.size() << endl;
    for (int s : possible_sums) {
        cout << s << " ";
    }
    cout << endl;
}

int main()
{
    ritik_tiwary;
    solve();
    return 0;
}
