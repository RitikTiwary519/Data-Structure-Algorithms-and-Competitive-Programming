#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        unordered_map<char,int> m;
        for(int i=0;i<n;i++)
        {
            char x;
            cin>>x;
            m[x]++;
        }
        int ans=0;
        for(auto it: m)
        {
            if(it.second-(it.first-'A'+1)>=0)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    
}