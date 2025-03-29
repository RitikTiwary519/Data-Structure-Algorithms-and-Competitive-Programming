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
    int n;
    cin>>n;
    vector<int> temp;
    while(n>0){
        int k = 1;
        while((k*(k+1))/2 <= n){
            k++;
        }
        temp.push_back(k);
        n-=(k*(k-1))/2;
    }

    int sum=accumulate(temp.begin(),temp.end(),0);

    cout << sum << endl;

    int x=0,y=-1;
    int N=temp.size();
    for(int i=0;i<N;i++){
        y++;
        int h = temp[i];
        while(h--){
            cout << x << " " << y << endl;
            x++;
        }
    }

    
    
    
    
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