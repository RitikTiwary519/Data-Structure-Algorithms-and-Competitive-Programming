#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    long long size;
    cin>>size;
    long long even=0,odd=0;
    long long min=INT_MAX;
    while (size--)
    {
        int a;
        cin>>a;
        if(a%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
        if(min>a)
        {
            min=a;
        }
    }
    //cout<<min<<endl;

    if(min%2==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        if(odd==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    


    }
    
}