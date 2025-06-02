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


// another method is using the frequency string as the key in hash, that method
 // more cooler 

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> copy(strs.begin(),strs.end());

        for(auto &str: copy)
        {
            sort(str.begin(),str.end());
        }
        unordered_map<string,vector<string>> mp;
        int i=0;
        for(auto str: copy)
        {
            mp[str].push_back(strs[i]);
            i++;
        }

        vector<vector<string>> ans;
        for(auto v: mp)
        {
            ans.push_back(v.second);
        }
        return ans;
    }
};