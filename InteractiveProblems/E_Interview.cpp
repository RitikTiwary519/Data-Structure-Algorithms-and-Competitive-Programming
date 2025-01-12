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

const int MAXN = 1000000;
int pre[MAXN];

int query(int l,int mid)
{
    // printf("? %d",m-l+1);
    // for(int i=l;i<=m;i++)
    // {
    //     printf(" %d",i);
    // }
    // printf("\n");
    // int val;
    // scanf("%d",&val);
    // fflush(stdout);
    // return val;
        // Query the range [l, mid]
        cout << "? " << mid - l + 1 << " ";
        for (ll i = l; i <= mid; i++) {
            cout << i << " ";
        }
        cout << endl;
        cout << flush;

        ll check;
        cin >> check;
        return check;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        pre[0]=0;

        for (int i = 1; i < n; i++)
        {
            int x;
            cin>>x;
            pre[i]=pre[i-1]+x;
        }
        int ans=0;
        int l=1,r=n;
        while(l<r)
        {
            int m = (l+r)/2;
            int check = query(l,m);
            if(check>(pre[m]-pre[l-1]))
            {
                r=m;
            }
            else
            {
                l=m+1;
            }

        }
        printf("! %d\n",l);
        fflush(stdout);   
    } 
    
}