#include <bits/stdc++.h>
using namespace std;
int solve()
{
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> chek(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
           // chek[i]=v[i];
        }
        // sort(chek.begin(),chek.end());
        // if(chek==v)
        // {
        //     return 0;
        // }

        int small=*min_element(v.begin(), v.end());
        int fl=0;
        int ct=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==small)
            {
                fl=1;
                i++;
            }
            if(fl==1 && i<n-1)
            {
                if(v[i]>v[i+1])
                {
                    fl=-100;
                    break;
                }
            }
            else{
                if(i<n-1)
                ct++;
            }
        }
        if(fl==-100)
        {
            return -1;
        }
        return ct;





}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    
}