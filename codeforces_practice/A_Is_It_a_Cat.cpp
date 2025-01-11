#include <bits/stdc++.h>
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define fl for (ll i = 0; i < n; i++)
#define rfl for (ll i = n - 1; i >= 0; i--)
#define input                  \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        v.push_back(x);        \
    }
#define srt sort(v.begin(), v.end());
#define deb(v)            \
    for (auto &i : v)     \
    {                     \
        cout << i << ' '; \
    }
#define arrinput               \
    for (ll i = 0; i < n; i++) \
    {                          \
        cin >> arr[i];         \
    }
using namespace std;
bool isSubSequence(string str1, string str2, int m, int n)
{
 
    // Base Cases
    if (m == 0)
        return true;
    if (n == 0)
        return false;
 
    // If last characters of two
    // strings are matching
    if (str1[m - 1] == str2[n - 1])
        return isSubSequence(str1, str2, m - 1, n - 1);
 
    // If last characters are
    // not matching
    return isSubSequence(str1, str2, m, n - 1);
}
signed main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tcc;
    cin >> tcc;
    while (tcc--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        bool flg2 = 1;
        string s1 = "";
        string s2 = "meow";
        if (n < 4)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
 
            char c = (tolower(s[i]));
            s1 += c;
        }
        int a = -1, b = -1, c = -1, d = -1;
        int i = 0;
        if (s1[i] == 'm')
            while ((s1[i] == 'm') and i < n)
            {
                a = 1;
                i++;
            }
        else
        {
            cout << "NO" << endl;
            continue;
        }
        if (s1[i] == 'e')
            while ((s1[i] == 'e') and i < n)
            {
                b = 1;
                i++;
            }
        else
        {
            cout << "NO" << endl;
            continue;
        }
        if (s1[i] == 'o')
            while ((s1[i] == 'o') and i < n)
            {
                c = 1;
                i++;
            }
        else
        {
            cout << "NO" << endl;
            continue;
        }
        if (s1[i] == 'w')
            while ((s1[i] == 'w') and i < n)
            {
                d = 1;
                i++;
            }
        else
        {
            cout << "NO" << endl;
            continue;
        }
 
        if (a == 1 and b == 1 and c == 1 and d == 1 and i == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}