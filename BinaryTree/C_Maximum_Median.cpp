#include <bits/stdc++.h>
#define ll long long
#define int ll
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

bool check(vector<int> &v,int mid,int x,int k)
{
    int ans = 0;
    for(int i=mid;i<v.size();i++)
    {
        ans+=(x-v[i] > 0 ? x-v[i] : 0);
        if(ans>k)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n,k;
    cin>>n>>k;

    vector<int> v;
    input
    srt
    int m = (n+1)/2-1;
    int lo = v[m];
    int hi = lo+k+100;
    while(lo<hi)
    {
        int mid = lo+(hi-lo)/2;
        if(check(v,m,mid,k))
        {
            lo = mid+1;
        }
        else
        {
            hi=mid;
        }
    }
    cout<<lo-1<<endl;
    return;

}

signed main()
{
    solve();
}