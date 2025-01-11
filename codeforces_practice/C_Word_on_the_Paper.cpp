#include <bits/stdc++.h>
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define fl for (ll i = 0; i < n; i++)
#define rfl for (ll i = n - 1; i >= 0; i--)
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
int main()
{int t;\
cin>>t; \
while(t--)\
{
    char arr[8][8];
    vector<char> v;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if(arr[i][j]!='.')
            {
                v.push_back(arr[i][j]);
            }
        }
        
    }
    for(auto it:v)
    {
        cout<<it;
    }
    cout<<endl;
    
}
}