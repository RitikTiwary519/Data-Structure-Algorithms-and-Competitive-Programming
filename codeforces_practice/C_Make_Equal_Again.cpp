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
        vector<int> v(n);
        for(auto &it : v) cin>>it;

        ll i=0,j=n-1;
        ll lcnt=0,rcnt=0;
        if(v[i]!=v[j])
        {
            while(v[i]==v[i+1])
            {
                i++;
                lcnt++;

            }
            while(v[j]==v[j-1])
            {
                j--;
                rcnt++;
            }
            if(lcnt>rcnt)
            {
                cout<<n-lcnt-1<<endl;
            }
            else{
                cout<<n-rcnt-1<<endl;
            }

        }
        else{
            int cnt1=0;
            int cos=v[0];
            int i=0;
            int j=n-1;
            while(v[i]==cos and i<=n-1)
            {
                i++;

            }
            while(v[j]==cos and j>=0)
            {
                j--;

            }
            if(i>j)
            {
                cout<<0<<endl;
            }
            else{
                cout<<(j-i+1)<<endl;
            }
        }
    }
    
}