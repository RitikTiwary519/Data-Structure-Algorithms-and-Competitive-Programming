#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int count;
        cin>>count;
        vector<long long> vec;
        for (int i = 0; i < count; i++)
        {
            long long val;
            cin>>val;
            vec.push_back(val);
        }
        sort(vec.begin(),vec.end());
        long long ans1,ans2;
        ans1=vec[0]*vec[1];
        ans2=vec[count-1]*vec[count-2];
        if(ans1>ans2)
        {
            cout<<ans1<<endl;   
        }
        else{
            cout<<ans2<<endl;
        }
        
    }
    
    
}