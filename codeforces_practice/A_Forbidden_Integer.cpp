#include <bits/stdc++.h>
using namespace std;
#define l long


void even(int a){
    int p=a/2;
    while(p--)
    {
        cout<<2<<" ";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        l l n,x,k;
        cin>>n>>k>>x;
        if(k==1)
        {
            cout<<"NO";
        }
        else{
            if(x!=1)
            {
                cout<<"YES"<<endl;
                cout<<n<<endl;
                while(n--)
                {
                    cout<<1<<" ";
                }
            }
            else{
                if(k==2)
                {
                    if(n%2==1)
                    {
                        cout<<"NO"<<endl;
                        continue;
                    }
                    else{
                        cout<<"YES"<<endl;
                        cout<<n/2<<endl;
                        even(n);
                    }

                }
                if(k>=3)
                {
                    if(n%2==0)
                    {
                        cout<<"YES"<<endl;
                        cout<<n/2<<endl;
                        even(n);
                    }
                    else{
                        cout<<"YES"<<endl;
                        cout<<(n-3)/2+1<<endl;
                        cout<<3<<" ";
                        even(n-3);
                    }
                }
            }
        }
    cout<<""<<endl;
    }
}