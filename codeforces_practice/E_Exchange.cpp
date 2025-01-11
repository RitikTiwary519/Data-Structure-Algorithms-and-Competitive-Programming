#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        long long n,g,s;
        cin>>n>>g>>s;
        if(g>=s)
        {
            cout<<1<<endl;
            continue;
        }
        else{
            if(n-floor(n/g)*g>0)
           { cout<<n/g+1<<endl;
            continue;
           }
            cout<<n/g<<endl;
        }
    }
    
}