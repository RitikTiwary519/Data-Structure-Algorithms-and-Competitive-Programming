#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    int count,grp;
    cin>>count>>grp;
    vector<int> arr(count);
    vector<int> ans(count);
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for (int i = 0; i < count-1; i++)
    {
       ans[i]=abs(arr[i]-arr[i+1]);
       sum+=ans[i];
    }

    sort(ans.begin(),ans.end(),greater<int>());

    int red=0;
    for (int i = 0; i < grp-1; i++)
    {
        red+=ans[i];
    }

    cout<<sum-red<<endl;
    
    
       
    }
    
}