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

void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    int lst = n - 1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] != '0')
        {
            lst = i;
            break;
        }
    }

    int fnt = 0;
    for (int i = 0; i < lst; i++)  // corrected range
    {
        if (str[i] != '0')
        {
            fnt++;
        }
    }

    cout << fnt + (n - 1 - lst) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
