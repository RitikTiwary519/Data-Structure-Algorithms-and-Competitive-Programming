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


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        for (int i = 0; i < s.size(); ++i) {
            char c1 = s[i];
            char c2 = t[i];

            if (mp1.count(c1)) {
                if (mp1[c1] != c2)
                    return false;
            } else {
                if (mp2.count(c2))
                    return false;

                mp1[c1] = c2;
                mp2[c2] = c1;
            }
        }

        return true;
    }
};
