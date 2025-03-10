#include <bits/stdc++.h>
#define ll long long
#define ritik_tiwary ios_base::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n == 1)
    {
        yes;
        return;
    }

    ll ogcd = 0, egcd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            ogcd = __gcd(ogcd, v[i]);
        }
        else
        {
            egcd = __gcd(egcd, v[i]);
        }
    }

    if (egcd == 1 && ogcd == 1)
    {
        no;
        return;
    }

    bool fl1 = false, fl2 = false;

    for (int i = 0; i < n; i += 2)
    {
        if (ogcd != 0 && v[i] % ogcd == 0)
        {
            fl1 = true;
            break;
        }
    }

    for (int i = 1; i < n; i += 2)
    {
        if (egcd != 0 && v[i] % egcd == 0)
        {
            fl2 = true;
            break;
        }
    }

    if (fl1 && fl2)
    {
        no;
    }
    else
    {
        yes;
    }
}

int main()
{
    ritik_tiwary
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
