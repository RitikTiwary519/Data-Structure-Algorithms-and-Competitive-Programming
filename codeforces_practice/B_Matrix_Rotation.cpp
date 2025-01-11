#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       long long a,b,c,d;
       cin>>a>>b>>c>>d;

       if((a>b && a>c && a>d && d<a && d<b && d<c)
       ||(d>b && d>c && d>a && a<d && a<b && a<c)
       ||(b>a && b>c && b>d && c<a && c<b && c<d)
       ||(c>a && c>b && c>d && b<a && b<c && b<d))
       {
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }

        
        
        
    }
    
}