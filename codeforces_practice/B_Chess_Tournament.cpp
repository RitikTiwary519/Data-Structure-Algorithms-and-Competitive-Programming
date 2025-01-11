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
        string order;
        cin>>order;
        int chk=0;
        forn(i,0,n)
        {
            if(order[i]=='2') chk++;
        }
        if(chk==1) 
        {
            no;
            continue;
        }
        yes
         vector<vector<char>> v( n , vector<char> (n, '='));  
        forn(i,0,n)
        {
            forn(j,0,n)
            {
                if(i==j)
                {
                    v[i][j]='X';
                }
                else if(order[i]=='1' && order[j]=='1')
                {
                    v[i][j]='=';
                }
                else if(order[i]=='1' && order[j]=='2')
                {
                    v[i][j]='=';
                }
                else if(order[i]=='2' && order[j]=='2')
                {
                    v[i][j]='+';
                }
                 else if(order[i]=='2' && order[j]=='1')
                {
                    v[i][j]='=';
                }
            }
        }


        for(auto it: v)
        {
            for(auto j: it)
            {
                cout<<j;
            }
            cout<<endl;
        }
    }
    
}