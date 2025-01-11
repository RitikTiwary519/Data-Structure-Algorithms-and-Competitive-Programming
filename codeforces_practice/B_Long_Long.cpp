#include <bits/stdc++.h>
using namespace std;
#define fr(i, a, b) for (int i = a; i < b; ++i)
#define frr(i, a, b) for (int i = b - 1; i >= a; --i)
#define l long
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int size;
        cin>>size;
        int arr[size];
        long long sum=0;
        for (int i = 0; i < size; i++)
        {
            cin>>arr[i]; 
            sum+=abs(arr[i]);       
        }

        int fl=1,ct=0;

        for(int j=0;j<size;j++)
        {
            if(arr[j]<0 && fl) 
            {
                ct++;
                fl=0;
            }
            if(arr[j]>0)
            {
                fl=1;
            }
        }
        cout<<sum<<" "<<ct<<endl;

        
        
    }
        
}