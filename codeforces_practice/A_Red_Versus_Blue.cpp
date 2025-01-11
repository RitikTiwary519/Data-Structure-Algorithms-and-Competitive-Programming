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
        int n,r,b;
        cin>>n>>r>>b;
        string ans;
        if(r>=b)
        {
            int i=1;
            while((r/i)>=(b))
            {
                i++;
            }
            int temp=i;
            for(int j=0;j<i;j++)
            {
                while(temp--)
                {
                    ans.push_back('R');
                }
                temp=i;
                ans.push_back('B');
            }

    

        }
        else{
          continue;
        }
        cout<<ans<<endl;
    }
    
}