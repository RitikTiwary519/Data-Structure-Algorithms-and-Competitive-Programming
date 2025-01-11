#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define all(x) x.begin(), x.end()
#define Y puts("YES")
#define N puts("NO")
using namespace std;
 
void code()
{
    ll n;
    cin >> n;
 
    ll a[n], cnt = 0, container = 0, emptyc = 0, extra = 0, fl = 1, total = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            total++;
        }
    }
    for (ll i = 0; i < n; ++i)
    {
        if (a[i] == 1)
        {
            cnt = 0;
            while (i < n && a[i] == 1)
            {
                cnt++;
                i++;
            }
            i--;
            if ((cnt - emptyc) > 0)
            {
                container += (cnt - emptyc);
                extra += cnt;
                emptyc = 0;
            }
            else
            {
                extra += cnt;
                emptyc -= cnt;
            }
        }
        else if (container)
        {
            if (fl)
            {
                emptyc = ((extra - 1) / 2);
                extra = ((extra - 1) & 1);
                fl = 0;
            }
            else
            {
                emptyc += (extra / 2);
                extra = (extra & 1);
            }
        }
    }
    cout << container << '\n';
}
 
int main()
{

 
    ll t = 1;
    cin >> t;
 
    while (t--)
    {
        code();
    }
    return 0;
}