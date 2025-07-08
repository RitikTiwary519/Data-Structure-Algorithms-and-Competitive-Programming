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
    int n,k;
    cin>>n>>k;
    vector<int> nums;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }

    for(int i=0;i<n;i++)
    {
        int tgt = k-nums[i];
        if(mp.count(tgt)==0)
        {
            mp[nums[i]]=i;
        }
        else
        {
            cout<<mp[tgt]+1<<" "<<i+1<<endl;

            return;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;

}


int main()
{
    int t=1;
    while (t--)
    {
        solve();
    }
    
}