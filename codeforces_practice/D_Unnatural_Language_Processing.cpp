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
        string str;
        cin>>str;
        vector<int> conv(n);
        string ans;
        for (int i = 0; i < n; i++)
        {
            if(str[i]=='a' || str[i]=='e')
            {
                conv[i]=1;
            }
            else
            {
                conv[i]=0;
            }
            
        }
        if(n>2)ans+=str[0];
        for (int i = 1; i < n-2; i++)
        {
            ans+=str[i];
            if(conv[i]==1 && conv[i+1]==0 && conv[i+2]==1)
            {
                ans+='.';
            }
            if(conv[i]==0 && conv[i+1]==0)
            {
                ans+='.';
            }
        }
        ans+=str[n-2];
        ans+=str[n-1];
        cout<<ans<<endl;
        
        

    }
    
}
