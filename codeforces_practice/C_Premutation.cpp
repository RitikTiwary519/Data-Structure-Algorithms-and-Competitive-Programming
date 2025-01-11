#include <bits/stdc++.h>
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
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




void solve(vector<int> &ans)
{
    vector<vector<int>> matrix;
    int n;
    cin>>n;
    forn(i,0,n)
    {
        vector<int> st;
        forn(i,0,n-1)
        {
            int x;
            cin>>x;
            st.push_back(x);
        }
        matrix.push_back(st);
    }

    
    forn(i,0,n-1)
    {
        map<int,int> mp;
        forn(j,0,n)
        {
            mp[matrix[j][i]]++;
        }
    vector<pair<int,int>> temp;
    for(auto it: mp)
    {
        temp.push_back(it);
    }
    if(i==0 && temp[0].second>temp[1].second)
    {
        ans.push_back(temp[0].first);
        ans.push_back(temp[1].first);
        continue;
    }
    else if(i==0 && temp[0].second<temp[1].second)
    {
        ans.push_back(temp[1].first);
        ans.push_back(temp[0].first); 
        continue;
    }
    // if(temp[0].second>temp[1].second)
    // {
    //     ans.push_back(temp[0].first);
    //    // ans.push_back(temp[1].first);
    //     continue;
    // }
    // if(temp[0].second<temp[1].second){
    //     ans.push_back(temp[1].first);
    //    // ans.push_back(temp[0].first);
    //    continue;
    // }
    else{
        if(ans[ans.size()-1]==temp[0].first)
        {
            ans.push_back(temp[1].first);
        }
        else{
             ans.push_back(temp[0].first);
        }
    }
    }
   
}


int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        vector<int> ans;
       solve(ans); 
       for(auto it: ans)
       {
        cout<<it<<" ";
       }
      
       cout<<endl;
    }
    
}