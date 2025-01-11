#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &it: v) cin>>it;
    long long int sum=0,ans=0;
    for(int i=0,j=0;i<n;i++)
    {
        sum+=v[i];
        while (sum>k)
        {
            sum-=v[j++];
        }
        ans+=(((i-j+1)*(i-j+1))/2);
        

    }
    cout<<ans<<endl;
}