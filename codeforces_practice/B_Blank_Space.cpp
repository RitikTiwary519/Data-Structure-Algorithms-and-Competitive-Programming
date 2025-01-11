#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int size,ct=0,ans=0;
        cin>>size;
        for (int i = 0; i < size; i++)
        {
            int v;
            cin>>v;
            if(v==0)
            {
                ct++;
                ans=max(ans,ct);
            }
            else{
                ct=0;
            }
        }
        cout<<ans<<endl;
        

        
        
        
    }
    
}