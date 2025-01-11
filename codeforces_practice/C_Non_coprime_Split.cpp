#include <bits/stdc++.h>
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define input                  \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        v.push_back(x);        \
    }
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

void solve()
{
     int n,m;
        cin>>n>>m;
        if(n==m && n==1)
        {
            cout<<-1<<endl;
            return;
        }
        if(n==m)
        {
            if(isPrime(n))
            {
                cout<<-1<<endl;
                return;
            }
            int i=2;
            for(;i<m;i++)
            {
                if(m%i==0)
                {
                    break;
                }
            }
            cout<<i<<" "<<m-i<<endl;
            return;
        }
        if(m<4)
        {
            cout<<-1<<endl;
            return;
        }
        else{
            if(m%2==0)
            {
                cout<<2<<" "<<m-2<<endl;
            }
            else{
                cout<<2<<" "<<m-3<<endl;
            }
        }

}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       solve();
    }
    
}