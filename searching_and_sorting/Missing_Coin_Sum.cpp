#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);

// int main() {
//     ritik_tiwary
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end()); // Sorting is still helpful for optimization

//     const int MAX = 1e6 + 5; // Safer upper bound
//     vector<int> dp(MAX, 0);
//     dp[0] = 1; // We can always make sum 0

//     for (int i = 0; i < n; i++) {
//         // Traverse backwards to avoid using the same coin more than once
//         for (int j = MAX - v[i] - 1; j >= 0; j--) {
//             if (dp[j]) {
//                 dp[j + v[i]] = 1;
//             }
//         }
//     }

//     for (int i = 1; i < MAX; i++) {
//         if (!dp[i]) {
//             cout << i << "\n";
//             break;
//         }
//     }
// }
signed main() {
    ritik_tiwary
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); // Sorting is still helpful for optimization

    int curr=0;
    int fl=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>curr+1)
        {
            cout<<curr+1<<endl;
            fl=1;
            break;
        }
        else
        {
            curr+=v[i];
        }
    }
    if(fl==0)
    {
        cout<<curr+1<<endl;

    }
}
