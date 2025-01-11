#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        if(k==n)
        {
            for(int i=0;i<n;i++)
            {
                cout<<i+1<<" ";
            }
        }
        if(k==0)
        {
            for(int i=n;i>0;i--)
            {
                cout<<i<<" ";
            }
        }
        else{
            for(int i=n;i>k+1;i--)
            {
                cout<<i<<" ";
            }
            for(int i=1;i<=k+1;i++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    
}