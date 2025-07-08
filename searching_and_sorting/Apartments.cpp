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
    cin>> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    int ans = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if(abs(a[i]-b[j])<=k)
        {
            ans++;
            i++;
            j++;    
        }
        else if(a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << ans << endl;  
}

int main(){
    int t;
    t=1;
    while (t--)
    {
        solve();
    }
    
}