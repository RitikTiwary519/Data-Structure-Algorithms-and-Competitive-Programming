#include <iostream>
using namespace std;

typedef long long ll;

const int MOD1 = 1e9 + 7;
const int MOD2 = 1e9 + 9;
const int BASE1 = 31;
const int BASE2 = 37;

pair<int, int> hashValue(const string &s, int m, int base1, int base2, int mod1, int mod2) {
    ll hash1 = 0, hash2 = 0;
    ll factor1 = 1, factor2 = 1;

    for (int i = m - 1; i >= 0; i--) {
        hash1 = (hash1 + (s[i] - 'a') * factor1) % mod1;
        hash2 = (hash2 + (s[i] - 'a') * factor2) % mod2;
        factor1 = (factor1 * base1) % mod1;
        factor2 = (factor2 * base2) % mod2;
    }

    return { (int)hash1, (int)hash2 };
}

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (n < m) return -1;

        ll max_weight1 = 1, max_weight2 = 1;
        for (int i = 1; i < m; i++) {
            max_weight1 = (max_weight1 * BASE1) % MOD1;
            max_weight2 = (max_weight2 * BASE2) % MOD2;
        }

        auto hashNeedle = hashValue(needle, m, BASE1, BASE2, MOD1, MOD2);
        auto hashHay = hashValue(haystack.substr(0, m), m, BASE1, BASE2, MOD1, MOD2);

        for (int i = 0; i <= n - m; i++) {
            if (i != 0) {
                hashHay.first = (((hashHay.first - ((haystack[i - 1] - 'a') * max_weight1) % MOD1 + MOD1) * BASE1) % MOD1 + (haystack[i + m - 1] - 'a')) % MOD1;
                hashHay.second = (((hashHay.second - ((haystack[i - 1] - 'a') * max_weight2) % MOD2 + MOD2) * BASE2) % MOD2 + (haystack[i + m - 1] - 'a')) % MOD2;
            }

            if (hashHay == hashNeedle) {
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
