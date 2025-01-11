#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n,k;

        int fl=0;
        cin>>n>>k;
        if(k>n)
        {
            cout<<"NO"<<endl;
        }
        if(n%k==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            while (n>=k)
            {
                n-=2;
                if(n%k==0)
                {
                    fl=1;
                    break;
                }
            }
            if(fl==0)
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
            
        }
    }
    
}