#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(auto &it: a) cin>>it;
    for(auto &e: b) cin>>e;
    long long int ans=0;
    for(int i=0,j=0; i<n && j<m;)
    {
        if(a[i]==b[j])
        {
            long long int  counta=0;
            long long int countb=0;
            while(counta+i<n && a[i+counta]==a[i]) counta++;
            while(countb+j<m && b[j+countb]==b[j]) countb++;
            ans+=(counta*countb);
            i+=counta;
            j+=countb;
            // ans++;
            // i++,j++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else{
            j++;
        }
    }
    cout<<ans<<endl;
    


}