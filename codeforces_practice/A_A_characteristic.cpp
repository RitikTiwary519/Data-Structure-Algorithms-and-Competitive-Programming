#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,p;
        cin>>n>>p;
        int x=0,y=n;
        if(n==2)
        {
            if(p==0)
            {
                cout<<"YES"<<endl;
                cout<<1<<" "<<-1<<endl;
            }
            if(p==1)
            {
                cout<<"YES"<<endl;
                cout<<1<<" "<<1<<endl;
            }
        }
        else{

        
    while (x<=n)
    {
        if(x>=2 && y>=2)
        {
            if((x)*(x-1)/2+(y)*(y-1)/2==p)
            {
                cout<<"YES"<<endl;
                while (x>0)
                {
                    cout<<1<<" ";
                }
                while (y>0)
                {
                    cout<<-1<<" ";
                }
                break;
            }
            else{
                continue;
            }
   
        }
        x++;
        y--;

    }
    
        
    }
    }
}