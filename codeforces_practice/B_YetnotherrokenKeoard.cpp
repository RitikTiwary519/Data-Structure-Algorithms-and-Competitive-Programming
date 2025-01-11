#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string str;
        stack<int> lastbig;
        stack<int> lastsmall;
        cin>>str;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='b'|| str[i]=='B')
            {
                if(!lastsmall.empty() && str[i]=='b')
                {
                    lastsmall.pop();
                }
                if(!lastbig.empty() && str[i]=='B')
                {
                    lastbig.pop();
                }
                
            }
            if(str[i]>='a' && str[i]<='z' && str[i]!='b')
            {
                lastsmall.push(i);
            }
            if(str[i]>='A' && str[i]<='Z' && str[i]!='B'){
                lastbig.push(i);
            }
        }
        set<int> ans;
        for (int i = 0; i < lastsmall.size(); i++)
        {
            ans.insert(lastsmall.top());
            lastsmall.pop();
        }
        for (int i = 0; i < lastbig.size(); i++)
        {
            ans.insert(lastbig.top());
            lastbig.pop();
        }
        for(auto it: ans)
        {
            cout<<str[it];
        }
        cout<<endl;
    }
    
}