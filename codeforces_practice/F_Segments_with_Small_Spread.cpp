#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<long long int> v(n);
    for(auto &it: v) cin>>it;
    multiset<long long int> mst;
    long long int ans=0;

    for(int i=0,j=0;i<n;i++)
    {
        mst.insert(v[i]);
        while (*mst.rbegin()-*mst.begin()>k)
        {
           mst.erase(mst.find(v[j++]));
        }
        ans+=mst.size();
        
    }
    cout<<ans<<endl;

    
}