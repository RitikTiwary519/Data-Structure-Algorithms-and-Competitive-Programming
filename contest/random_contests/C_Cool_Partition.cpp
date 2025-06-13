#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int ans =0;
    unordered_set<int> st1,st2;
    ans+=1;
    st1.insert(v[0]);
    for(int i=1;i<n;i++)
    {
        st2.insert(v[i]);

        if(st1.find(v[i]) != st1.end())
        {
            st1.erase(v[i]);
        }
        if(st1.empty())
        {
            ans++;
            st1=st2;
            st2.clear();
            continue;
        }
    }

    cout<<ans<<endl;
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