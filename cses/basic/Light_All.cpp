#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)


void solve()
{
    string str;
    int n;
    cin>>n;
    cin>>str;

    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
        {
            if(i==n-1 || str[i+1]=='0'|| str[i+1]=='2')
            {
                no
                return;
            }
            else
            {
                str[i+1]='2';
            }
        }
        else if(str[i]=='2')
        {
            continue;
        }
        else
        {
            if(i==n-1)
            {
                continue;
            }
            else
            {
                if(str[i+1]=='0')
                {
                    str[i+1]='2';
                }
            }
        }
    
    }
    yes
    return;
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