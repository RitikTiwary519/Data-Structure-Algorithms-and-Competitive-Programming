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

//1 2 4 3 3
//1 2 3 3 4
//1 2 3 3
//2 3
//2
//0



//1 2 3 3 4
//1:1  
//2:1
//3:2   -->(n3-n1)
//4:1   -->1

int main()
{
   
    int n;
    cin>>n;
    vector<int> val={0,0,0,0,0,0};
    int ans=0;
    
    forn(i,0,n)
    {
        int x;
        cin>>x;
        val[x]++;
    }
   
    // for group of 4
    ans+=val[4];
    val[4]=0;
    //for 3 checking with 1
    if(val[3]>val[1])
    {
        ans+=val[1];
        val[1]=0;
        val[3]-=val[1];
        ans+=val[3];
    }
    else
    {
        ans=val[3];
        val[1]-=val[3];
    }
    //for 2 checking
    if(val[2]>val[1])
    {
        ans=val[1];
        val[2]-=val[1];
    }
    else
    {
        ans=val[2];
        val[1]-=val[2];
    }
    //for 1
    ans+=ceil(val[1]/4);
    ans+=val[2]/2+val[2]%2;
    cout<<ans<<endl;
    
    
}