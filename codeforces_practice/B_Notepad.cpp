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
        int val;
        cin>>val;
        string s;
        cin>>s;
        int ch=0;
        for(int i=2;i<s.length();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(s[i]==s[j] && s[i+1]==s[j+1])
                {
                    if(j==i-1 && s[i]==s[j] && s[i+2]==s[j+2] )
                    {ch=1;
                    break;
                    }
                    if(j!=i-1 && s[i]==s[j] && s[i+1]==s[j+1] )
                    {ch=1;
                    break;
                    }
                    

                }
            }
            if(ch==1)
            {
                break;
            }
        }
        if(ch==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}