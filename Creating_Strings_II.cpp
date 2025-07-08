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

// long long factorial(int n) {
//     long long res = 1;
//     for (int i = 2; i <= n; i++) {
//         res *= i;
//     }
//     return res;
// }

// void solve()
// {
//     string s;
//     cin>>s;
//     int n = s.size();
//     vector<int> v(26, 0);
//     for (int i = 0; i < n; i++)
//     {
//         v[s[i] - 'a']++;
//     }
//     int ans = factorial(n);
//     for (int i = 0; i < 26; i++)
//     {
//         if (v[i] > 1)
//         {
//             ans /= factorial(v[i]);
//         }
//     }
//     cout << ans << endl;
// }

// int main()
// {
//     int t;
//     t=1;
//     while (t--)
//     {
//         solve();
//     }
    
// }
#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;
// Function to calculate factorial modulo MOD
long long factorial(int n)
{
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result = (result * i) % MOD;
    }
    return result;
}
// Function to the calculate modular exponentiation
long long mod_exp(long long base, long long exp,
                  long long mod)
{
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
// Function to the calculate modular inverse using Fermat's
// Little Theorem
long long mod_inverse(long long n, long long mod)
{
    return mod_exp(n, mod - 2, mod);
}
int main()
{
    string s;
    cin>>s; 
    // Count occurrences of each character
    vector<int> count(26, 0);
    for (char c : s) {
        count[c - 'a']++;
    }
    // Calculate the factorial of the length of the string
    long long ans = factorial(s.size());
    // Divide by the factorial of the counts of each
    // character
    for (int i = 0; i < 26; ++i) {
        if (count[i] > 0) {
            ans = (ans
                   * mod_inverse(factorial(count[i]), MOD))
                  % MOD;
        }
    }
    cout << ans << endl;
    return 0;
}