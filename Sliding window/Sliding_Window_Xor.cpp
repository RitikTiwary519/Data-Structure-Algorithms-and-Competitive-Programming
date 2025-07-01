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

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n,0);
    int x,a,b,c;
    cin>>x>>a>>b>>c;
    v[0]=x;
    for(int i=1;i<n;i++)
    {
        v[i]=(1ll* a*v[i-1]+b)%c;
    }

    int curr= 0 ;

    auto add = [&](int i){
        curr=curr^v[i];
    };

    auto remove = [&](int i){
        curr=curr^v[i];
    };

    auto get_curr = [&](){
        return curr;
    };
    int ans = 0;
    int i=0,j=0;
    while(j<n)
    {
        if(j==0)
        {
            while(j<m)
            {
                add(j);
                j++;
            }
            ans ^= get_curr();
            // cout<<ans<<endl;
        }
        else{
            remove(i);
            add(j);
            i++,j++;
            // cout<<get_min()<<endl;
            ans ^= get_curr();
        }
    }
    cout<<ans<<endl;
    // Output the final result
}


signed main()
{
    ritik_tiwary
    int t = 1; // Number of test cases
    while (t--)
    {
        solve();
    }
    
}