#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &it: a) cin>>it;
    int curr=0;
    int ans=0;
    for(int i=0,j=0;i<n;i++)
    {
        curr+=a[i];
        while(curr>=k)
        {
            curr-=a[j++];
        }
        ans+=j;
    }
    cout<<ans<<endl;
}