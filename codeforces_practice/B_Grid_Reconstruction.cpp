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
using namespace std;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

void solve(int val)
{
    int arr[2][val-1];
    int lo=1;
    int hi=2*val;
    arr[0][0]=hi--;
    arr[1][val-1]=hi--;
    for (int i = 0; i < val-1; i++)
    {
        if(i&1)
        {
            arr[0][i+1]=hi--;
            arr[1][i]=hi--;
        }
        else
        {
            arr[1][i]=lo++;
            arr[0][i+1]=lo++;
        }
        
    }
    arr[1][0]=100;
    arr[0][val-1]=arr[0][0]/2;
    forn(i,0,val)
    {
        cout<<arr[0][i]<<" ";
    }
    cout<<endl;
    forn(i,0,val)
    {
        cout<<arr[1][i]<<" ";
    }
    
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int val;
        cin>>val;
        solve(val);
        cout<<endl;
    }
    
}