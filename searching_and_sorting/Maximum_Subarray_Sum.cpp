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

signed main()
{
    int t;
    t=1;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            maxi=max(maxi,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        cout<<maxi<<endl;
    }
    
}