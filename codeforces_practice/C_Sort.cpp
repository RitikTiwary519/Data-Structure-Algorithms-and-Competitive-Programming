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
        int n,q;
        cin>>n>>q;

        string str1,str2;
        cin>>str1>>str2;

        vector<vector<int>> v1(n+1,vector<int>(26,0));
        vector<vector<int>> v2(n+1,vector<int>(26,0));

        vector<pair<int,int>> vp;
        for (int i = 0; i < q; i++)
        {
            int x,y;
            cin>>x>>y;
            vp.push_back({x,y});
        }
        

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                v1[i][j]=v1[i-1][j];
                v2[i][j]=v2[i-1][j];
            }

                v1[i][str1[i-1]-'a']++;
                v2[i][str2[i-1]-'a']++;
            
        }



        for (int i = 0; i < q; i++)
        {
            int l=vp[i].first;
            int r=vp[i].second;
            int sum=0;
            
            int ans=0;
            for (int j = 0; j < 26; j++)
            {
                int cnta=(v1[r][j]-v1[l-1][j]);
                int cntb=(v2[r][j]-v2[l-1][j]);
                ans+=abs(cnta-cntb);
            }
            cout<<ans/2<<endl;
            
        }
    }
    
}


