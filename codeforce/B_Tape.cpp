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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(n,0);
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<int> diff; 
    
    for(int i=1;i<n;i++)
    {
        diff.push_back(v[i]-v[i-1]);
        sum+=diff[i-1];
    }

    sort(diff.begin(),diff.end(),greater<int>());

    for (int i = 0; i < k-1; i++)
    {
        sum-=(diff[i]-1);
    }
    cout<<sum+1<<endl;
    
}

int main()
{
    int t;
    t=1;
    while (t--)
    {
        solve();
    }
    
}