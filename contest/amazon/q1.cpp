// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define rsrt sort(v.rbegin(), v.rend());
// #define mp make_pair
// #define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define srt sort(v.begin(), v.end());
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
// #define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

// void solve()
// {
//     string str;
//     cin>>str;

//     int n = str.size();
//     unordered_map<char,int> mp;
//     mp['A']=1;
//     mp['B']=10;
//     mp['C']=100;
//     mp['D']=1000;
//     mp['E']=10000;

//     priority_queue<pair<char,int>> q;

//     for(int i=0;i<n-1;i++)
//     {
//         if(str[i+1]>str[i])
//         {
//             q.push({str[i],i});
//         }
//     }
    
//     if(!q.empty())
//     {
//         auto val = q.top();
//         cout<<val.first<<endl;
//         str[val.second]='E';
//     }
//     cout<<str<<endl;
//     int ans=0;

//     for (int i= 0; i <n-1; i++)
//     {
//         if(str[i+1]>str[i])
//         {
//             ans-=(mp[str[i]]);
//         }
//         else
//         {
//             ans+=mp[str[i]];
//         }
//     }
//     ans+=mp[str[n-1]];
//     cout<<ans<<endl;
//     return;
    
// }

// int main()
// {
//     solve();
// }

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int getMaxSalary(string S) {
    unordered_map<char, int> salary = {
        {'A', 1}, {'B', 10}, {'C', 100}, {'D', 1000}, {'E', 10000}
    };
    unordered_map<char, int> ord = {
        {'A', 1}, {'B', 2}, {'C', 3}, {'D', 4}, {'E', 5}
    };
    int n = S.size();
    vector<int> maxRightPriority(n + 1, 0); // max office priority to the right

    // Build maxRightPriority
    for (int i = n - 1; i >= 0; --i) {
        maxRightPriority[i] = max(maxRightPriority[i + 1], ord[S[i]]);
    }

    // Compute the original salary
    int orig = 0;
    for (int i = 0; i < n; ++i) {
        if (maxRightPriority[i + 1] > ord[S[i]]) orig -= salary[S[i]];
        else orig += salary[S[i]];
    }

    int ans = orig;
    string offices = "ABCDE";
    // Try changing each position to every possible office
    for (int i = 0; i < n; ++i) {
        char old = S[i];
        for (char ch : offices) {
            if (ch == old) continue;
            int newSal = 0;

            // Simulate the changed string at position i
            for (int j = 0; j < n; ++j) {
                char cur = (j == i) ? ch : S[j];
                // Calculate max priority to the right for this new configuration
                int rightMax = 0;
                for (int k = j + 1; k < n; ++k) {
                    char afterChar = (k == i) ? ch : S[k];
                    rightMax = max(rightMax, ord[afterChar]);
                }
                if (rightMax > ord[cur]) newSal -= salary[cur];
                else newSal += salary[cur];
            }
            ans = max(ans, newSal);
        }
    }
    return ans;
}

int main() {
    string S;
    cin >> S;
    cout << getMaxSalary(S) << endl;
    return 0;
}