#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    int k,x;
    cin>>k>>x;
    if(k%x!=0)
       {
        cout<<1<<endl;
        cout<<k<<endl;
       }
    else{
        cout<<2<<endl;
        cout<<1<<" "<<k-1<<endl;
    }
    }
    
}