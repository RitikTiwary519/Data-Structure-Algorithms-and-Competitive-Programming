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
        vector<int> a(n),b(n),c(n);
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(a[i]>=x)
            {
                b[i]=a[i];
            }
            else{
                b[i]=x;
            }
        }
        for(int i=0;i<n;i++)
        {
          int x;
          cin>>x;
          if(b[i]>=x)
          {
            c[i]=b[i];
          }
          else{
            c[i]=x;
          }
        }
        sort(c.begin(), c.end()); 
        int sum=c[0]+c[1]+c[2];
        cout<<sum<<endl;
    }
    
}