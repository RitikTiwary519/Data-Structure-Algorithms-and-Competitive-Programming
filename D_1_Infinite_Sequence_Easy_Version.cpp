#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fun(vector<ll> &v, ll l, ll n)
{
    while (l > n)  
    {
        if (l % 2 == 1)
            l -= 1;
        else
            l /= 2;
    }
    return v[l]; 
}
void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> v(n + 1);

    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    
    cout << fun(v, l, n) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
