#include <bits/stdc++.h>
#define ll long long
#define ritik_tiwary ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

bool comp(pair<pair<int, int>, int> &a, pair<pair<int, int>, int> &b)
{
    return a.first.second < b.first.second;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> v(n);

    int max_b = 0; // Track the maximum end time

    for (int i = 0; i < n; i++)
    {
        int a, b, p;
        cin >> a >> b >> p;
        v[i] = {{a, b}, p};
        max_b = max(max_b, b); // Update max_b
    }

    sort(v.begin(), v.end(), comp);

    vector<int> dp(max_b + 1, 0);

    for (int i = 1; i <= max_b; i++)
    {
        dp[i] = dp[i - 1]; // Carry forward the previous best value

        for (auto &it : v)
        {
            if (it.first.second == i) // Check only jobs that end at i
            {
                dp[i] = max(dp[i], it.second + dp[it.first.first - 1]);
            }
        }
    }

    cout << dp[max_b] << endl;
}

int main()
{
    ritik_tiwary;
    solve();
    return 0;
}
