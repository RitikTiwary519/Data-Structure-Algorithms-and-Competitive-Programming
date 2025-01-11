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

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        vector<string> mat;

        for (int i = 0; i < n; i++)
        {
           string temp;
           cin>>temp;
           mat.push_back(temp);
        }

        int ans=0;
        for (int i = 1; i <= n; i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(mat[i-1][j-1]!=mat[j-1][i-1])
                {
                    mat[i-1][j-1]=mat[j-1][i-1];
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
        
        
    }
    
}