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
        int size;
        cin>>size;
        vector<int> vec(size,0);
        fr(i,0,size){
            int a;
            cin>>a;
            vec[i]=a;

        }
       
        std::sort(vec.begin(), vec.end());

        // for(auto it:vec)
        // {
        //     cout<<it<<" ";
        // } 

    long long sum=0;
    for(int j=0;j<size/2;j++)
    {
        int it;
        it=(vec[size-1-j]-vec[j]);
        sum+=it;
    }
    cout<<sum<<endl;
    }
    
}