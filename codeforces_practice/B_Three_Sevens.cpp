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

bool cmp(pair<int,int> p1, pair<int,int> p2)
{
    return p1.second<p2.second;
}
int solve()
{
    int days;
        cin>>days;
        int halua;
        map<int,int> magic;
        forn(i,0,days)
        {
            int n;
            cin>>n;
            halua=n;
            forn(j,0,n)
            {
                int x;
                cin>>x;
                magic[x]=i+1;
            }
        }
        vector<pair<int,int>> result;
        for(auto it: magic)
        {
            result.push_back(it);
        }    
        sort(result.begin(),result.end(),cmp);
        vector<int> final_ans(halua,-1);
        int hum=1;
        int lemmon=0;
        forn(i,0,result.size())
        {
            if(result[i].second==hum )
            {
                hum++;
                final_ans[lemmon]=result[i].first;
                lemmon++;
                //final_ans.push_back(result[i].first);
            }
           
        }
        forn(i,0,halua)
        {
            if(final_ans[i]==-1)
            return -1;
        }
        
        for(auto it : final_ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int chk=0;
        chk=solve();
        if(chk==-1)
        {
            cout<<-1<<endl;
        }

    }
    
}