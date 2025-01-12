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

const int MAXN = 100010;
int a[MAXN];

void query(int i)
{
    int ans=0;
    printf("? %d\n",i);
    fflush(stdout);
    scanf("%d",&a[i]);
}

void solve()
{
    int n;
    cin>>n;
    a[0]=n+1;
    a[n+1]=n+1;
    int l=1,r=n;

    while(l<r)
    {
        int m = (l+r)/2;
        query(m);
        query(m+1);
        if(a[m]<a[m+1])
        {
            r=m;
        }
        else
        {
            l=m+1;
        }
    }

    printf("! %d\n", l);
    fflush(stdout);
    return;
}

int main()
{
    solve();
}
