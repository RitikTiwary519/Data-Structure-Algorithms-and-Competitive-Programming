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
       
        int size;
        size=str.length();
        char ch;
        ch=str[0];
        int fl=0;
        for (int i = 0; i < size; i++)
        {
      
            if(ch!=str[i])
            {
                fl=1;
                break;
            }
      
        }
        if(fl==1)
        {
            cout<<size-1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        

    }
    
}