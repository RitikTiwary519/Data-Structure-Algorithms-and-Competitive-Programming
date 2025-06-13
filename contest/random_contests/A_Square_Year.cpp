#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)


void solve()
{
    string str;
    cin>>str;
    int n;
    n = stoi(str);
    for(int i=0;i<=n;i++)
    {
        if(i*i==n)
        {
            cout<<0<<" "<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    // buildup();
    while (t--)
    {
        solve();
    }
}

