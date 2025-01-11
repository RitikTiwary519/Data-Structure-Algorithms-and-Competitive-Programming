#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int size;
        cin>>size;
        int pos=0,neg=0,p=0;
        int ct=0;
        while(size--)
        {
            int t;
            cin>>t;
            if(t==-1)
            {
                neg++;
            }
            else{
                pos++;
            }
        }
        if(neg%2==1)
        {
            neg--;
            pos++;
            ct++;
        }
        if(pos>=neg)
        {
            cout<<ct<<endl;
        }
        else{
            while(pos<neg)
            {
                pos+=2;
                neg-=2;
                ct+=2;

            }
            cout<<ct<<endl;

        }
        
        
    }
    
}