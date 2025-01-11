#include<iostream>
using namespace std;


void ans(int s)
{
    int ct=0;
    for (int i = 1; i <= s; i++)
        {
            int x;
            cin>>x;
            if(i>= x)
            {
                ct=1;
            }
        }
        if(ct==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}



int main()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        int size;
        cin>>size;
        ans(size);
    }
    
    
}