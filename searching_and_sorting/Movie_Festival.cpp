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

bool comp(vector<int> &a,vector<int> &b)
{
    return a[1]<b[1];
}

void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> nums;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        nums.push_back({x,y});
    }
    sort(nums.begin(),nums.end(),comp);
    int ans = 0;
    int end=1;
    for(int i=0;i<n;i++)
    {
        int a = nums[i][0];
        int b = nums[i][1];
        if(end<=a)
        {
            end=b;
            ans++;
        }
        else if(end<=b)
        {
            continue;
        }
    }
    cout<<ans<<endl;

}


int main()
{
    int t=1;
    while (t--)
    {
        solve();
    }
    
}