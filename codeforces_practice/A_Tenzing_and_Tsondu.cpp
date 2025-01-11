#include <bits/stdc++.h>
using namespace std;
#define fr(i, a, b) for (int i = a; i < b; i++)
#define frr(i, a, b) for (int i = b - 1; i >= a; --i)
#define el endl;
#define l long
// #define ip cin>>
// #define op cout<<

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    int s1,s2;
    cin>>s1>>s2;
    int ar[s1];
    int arr[s2];
    long long su1=0,su2=0;
    fr(i,0,s1)
    {
        cin>>ar[i];
        su1+=ar[i];

    }
    fr(j,0,s2)
    {
        cin>>arr[j];
        su2+=arr[j];
    }

    if(su1>su2)
    {
        cout<<"Tsondu"<<endl;
    }
    else if(su1<su2)
    {
        cout<<"Tenzing"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
    
    }

}