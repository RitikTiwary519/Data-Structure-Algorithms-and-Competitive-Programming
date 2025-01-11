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
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int fl=0;
        forn(i,1,n-1)
        {
            if(v[i-1]>v[i] && v[i]<=v[i+1])
            {
                if(v[i]<v[i+1])
                {
                    fl=1;
                    break;
                }
                if(v[i]==v[i+1])
                {
                    int temp=v[i];
                    while(temp==v[i])
                    {
                        i++;
                    }
                    if(temp<v[i])
                    {
                        fl=1;
                        break;
                    }

                }
            }
        }
        if(fl==1)
        {
            no
        }
        else{
            yes
        }
    }
    
}