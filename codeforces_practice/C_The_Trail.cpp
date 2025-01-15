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

void solve()
{
    int n,m;
    cin>>n>>m;
    string str;
    cin>>str;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int x=0,y=0;
    arr[x][y]=-1;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='R')
        {
            x++;
            arr[x][y]=-1;
        }
        else
        {
            y++;
            arr[x][y]=-1;
        }
    }

    vector<int> row(n,0),col(m,0);
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]!=-1)
            {
                row[i]+=arr[i][j];
                col[j]+=arr[i][j];
            }
        }
    }

    x=0,y=0;
    if(str[0]=='D')
    {
        arr[x][y]= -1*(row[0]);
        row[x]=0;
        col[y]+=arr[x][y];

        for(int i=1;i<str.size();i++)
        {
            if(str[i]=='D')
            {
                x++;
                arr[x][y]=-col[y];
                col[y]=0;
                row[y]+=arr[x][y];
            }
            else
            {
                y++;
                arr[x][y]=-row[x];
                row[x]=0;
                col[y]+=arr[x][y];
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;  
    } 
    cout<<"hello"<<endl;
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

