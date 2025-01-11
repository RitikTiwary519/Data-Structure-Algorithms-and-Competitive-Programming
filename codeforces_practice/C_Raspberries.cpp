#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n,k;
    cin>>n>>k;
    int ct=INT_MIN;
    if(k==2 || k==3 || k==5)
    {
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            int num;
            if(x%k==0) 
            {
                num=k;
            }
            else{
                num=x%k;
            }
            ct=max(ct,num);
        }
        return k-ct;
    }
    else{
        int twokafactor=0;
        int num=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
          
            if(x%k==0)
            {
                num=k;
            }
            else{
                num=x%k;
            }
            if(x%2==0){
                twokafactor++;
            }
            ct=max(ct,num);
        }
       
        if(twokafactor>1 || ct==4){ return 0;}
        if(twokafactor==1 || ct==3) 
        {return 1;}
        else
        return 2;
        
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    
}