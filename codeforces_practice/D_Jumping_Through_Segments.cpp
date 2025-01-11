#include <bits/stdc++.h>
using namespace std;
#define long long int


int main()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first>>v[i].second;
            
        }
        vector<int> suffix(n);
        for (int i = n-1; i <= n; i--)
        {
            if(i==n-1)
            {
                suffix[i]=v[i].first;
            }
            else{
                suffix[i]=v[i].first+suffix[i+1];
            }
        }
        int current=1;
        su
        
        
    }
    
    
}