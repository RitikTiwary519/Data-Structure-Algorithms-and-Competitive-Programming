#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        unordered_map<char,int> m;
        int count;
        cin>>count;
        for (int i = 0; i < count; i++)
        {
            char x;
            cin>>x;
            m[x]++;
        }
        int ch=count/2;
        int mx=0;
        for(auto it: m)
        {
            mx=max(mx,it.second);
        }
        if(mx>ch)
        {
            cout<<(2*mx-count)<<endl;
        }
        else{
            if(count&1) cout<<1<<endl;
            else{
                cout<<0<<endl;
            }
        }
        
    }
    
}