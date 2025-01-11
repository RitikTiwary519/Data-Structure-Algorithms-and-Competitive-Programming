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
    string str;
    cin>>str;

    int i=0,j=n-1;
    int cnt1=0,cnt2=0;
    while(str[i]==str[j] && i<=j)
    {
        i++,j--;
    }

    if(i>j)
    {
        cout<<0<<endl; 
        return;
    }

    //start by removing str[i]

    char remove1=str[i];
    char remove2=str[j];
    int i1=i,j1=j;
    while(i<=j)
    {
        if(str[i]==str[j])
        {
            i++,j--;
        }
        else if(str[i]!=str[j] && str[i]==remove1)
        {
            i++;
            cnt1++;
        }
        else if(str[i]!=str[j] && str[j]==remove1)
        {
            j--;
            cnt1++;
        }
        else
        {
            cnt1=1e9;
            break;
        }
    }

    while(i1<=j1)
    {
        if(str[i1]==str[j1])
        {
            i1++,j1--;
        }
        else if(str[i1]!=str[j1] && str[i1]==remove2)
        {
            i1++;
            cnt2++;
        }
        else if(str[i1]!=str[j1] && str[j1]==remove2)
        {
            j1--;
            cnt2++;
        }
        else
        {
            cnt2=1e9;
            break;
        }
    }
    int ans=min(cnt1,cnt2);

    if(ans==1e9)
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        cout<<ans<<endl;
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