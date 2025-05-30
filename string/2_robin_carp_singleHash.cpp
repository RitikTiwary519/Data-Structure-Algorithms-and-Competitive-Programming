// Robin Karp, author : Ritik Tiwary

#include <iostream>
using namespace std;

const int MOD = 1e9 + 3;

int hashValue(const string &s, int radix, int m) {
    int ans = 0, factor = 1;
    for (int i = m - 1; i >= 0; i--) {
        ans = (ans + ((s[i] - 'a') * 1LL * factor) % MOD) % MOD;
        factor = (factor * 1LL * radix) % MOD;
    }
    return ans;
}

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (n < m) return -1;

        int radix = 26;
        int max_weight = 1;
        for (int i = 1; i < m; i++) {
            max_weight = (max_weight * 1LL * radix) % MOD;
        }

        int hashNeedle = hashValue(needle, radix, m);
        int hashHay = hashValue(haystack.substr(0, m), radix, m);

        for (int i = 0; i <= n - m; i++) {
            if (i != 0) {
                // Rolling hash update
                hashHay = ((hashHay - ((haystack[i - 1] - 'a') * 1LL * max_weight) % MOD + MOD) * radix) % MOD;
                hashHay = (hashHay + (haystack[i + m - 1] - 'a')) % MOD;
            }

            if (hashHay == hashNeedle) {
                // Double-check to avoid false positives due to hash collisions
                bool match = true;
                for (int j = 0; j < m; j++) {
                    if (haystack[i + j] != needle[j]) {
                        match = false;
                        break;
                    }
                }
                if (match) return i;
            }
        }

        return -1;
    }
};
