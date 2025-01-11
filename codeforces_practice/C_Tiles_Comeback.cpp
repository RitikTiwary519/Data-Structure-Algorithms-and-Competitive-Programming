#include<bits/stdc++.h>
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

string solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    forn(i,0,n)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
  
        int stchk=0;
        int enchk=0;
        forn(i,0,n)
        {

            if(v[i]==v[0] && stchk<m) 
            {stchk++;
         continue;
            }
            if(v[i]==v[n-1]) enchk++;

        }
        if(stchk>=m && enchk>=m) return "YES";
        else{
            return "NO";
        }

    
        
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        cout<<solve()<<endl;        
    }
    
    return 0;
}
