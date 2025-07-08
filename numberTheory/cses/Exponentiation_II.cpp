#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define rsrt sort(v.rbegin(), v.rend());
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)


const int mod = 1e9 + 7;

int exponentiation(int a, int b,int m)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
    {
        int x = exponentiation(a, b / 2,m);
        return (1LL * x * x) % m;
    }
    else
    {
        return (1LL * a * exponentiation(a, b - 1,m)) % m;
    }
}


signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b,c;
        cin >> a >> b>>c;
        
        int r = (exponentiation(b,c,mod-1));
        cout<<exponentiation(a,r,mod)<<endl;

    }
}