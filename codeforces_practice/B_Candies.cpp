#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int val;
        int times=0;
        vector<int> vec;
        cin>>val;
        if(val%2==0)
        {
            cout<<-1<<endl;
            continue;
        }
        else{
            while(val!=1)
            {
                times++;
                if(((val-1)/2)%2!=0)
                {
                    val=(val-1)/2;
                    vec.push_back(2);
                }
                else{
                    val=(val+1)/2;
                    vec.push_back(1);
                }
            }
        }
        cout<<times<<endl;
        for (int i = vec.size()-1; i >=0 ; i--)
        {
           cout<<vec[i]<<" ";
        }
        
        
        cout<<"\n";

    }
    
}