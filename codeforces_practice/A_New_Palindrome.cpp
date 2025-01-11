#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string str;
        cin>>str;
        int t=0;
        int len=str.length();
        for (int i = 0; i < len/2-1; i++)
        {
            if(str[i]!=str[i+1])
            {
                t=1;
            }
        }
        if(t==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}