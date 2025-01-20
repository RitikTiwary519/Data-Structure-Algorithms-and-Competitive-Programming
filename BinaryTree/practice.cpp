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

int arr[]={1,2,4,5,5,5,5,6,7,8};

int main()
{
    int n = sizeof(arr)/sizeof(int);
    int l=0,r=n-1;
    int x = 5;
    while(l<r)
    {
        int m = (l+r)/2;
        if(arr[m]>x)
        {
            r = m -1;
        }
        else
        {
            l=m ;
        }
    }
    cout<<"index is "<<l<<" value is "<<arr[l]<<endl;
}