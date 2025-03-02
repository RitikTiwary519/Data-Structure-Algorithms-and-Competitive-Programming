#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
vector<int> values(int n) {
    vector<int> ans;
    while(n != 0) {
        ans.push_back(n % 10);
        n = n / 10;
    }
    return ans;
}
 
int fun(int n, vector<int> &dp) {
    if(n == 0) {
        return 0;
    }
    if(dp[n] != -1) {
        return dp[n];
    }
 
    vector<int> ch = values(n);
    int res = INT_MAX;
    for(auto it : ch) {
        if(it > 0) {
            res = min(fun(n - it, dp) + 1, res);
        }
    }
    return dp[n] = res;
}
 
int main() {
    int n;
    cin >> n;
 
    // Initialize the memoization array with -1
    vector<int> dp(n + 1, 1e9);
    
    dp[0]=0;
    for (int i = 1; i <=n; i++)
    {
        int res=INT_MAX;
        vector<int> ch = values(i); 
        for (auto it : ch)
        {
            dp[i]=min(1+dp[i-it],dp[i]);
        }
    }

    cout<<dp[n]<<endl;
    
 
    return 0;
}
