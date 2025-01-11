#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
    long long a,b;
    cin>>a>>b;
    if(abs(a)>abs(b))
    {
        cout<<2*abs(a)-1<<endl;
    }
    else if(abs(a)==abs(b)){
        cout<<2*abs(a)<<endl;
    }
    else{
        cout<<2*abs(b)-1<<endl;
    }
    }
    
}