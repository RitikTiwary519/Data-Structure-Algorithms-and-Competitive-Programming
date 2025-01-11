#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long size,val;
        int c;
        c=0;
        cin>>size>>val;
        string str;
        cin>>str;
        for (long long i = 0; i < size; i++)
        {
            if((str[i]-'0'>=val)||c)
            {
                cout<<str[i];
            }
            else{
                cout<<val;
                cout<<str[i];
                c=1;
            }
        }
        if(c==0)
        cout<<val;
        cout<<"\n";
        
    }
    
}