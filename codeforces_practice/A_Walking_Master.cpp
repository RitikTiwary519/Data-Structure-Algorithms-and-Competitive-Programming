#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        long long d1=y2-y1;
        if(y2<y1)
        {
            cout<<-1<<endl;
            continue;
        }
        else if(y2==y1 && x2>x1)
        {
            
            cout<<-1<<endl;
            continue;
        }
        else if(x1+(y2-y1)<x2)
        {
            
            cout<<-1<<endl;
            continue;
        }
        else{
            cout<<abs(x2-(x1+(d1)))+d1<<endl;
        }
    }
    
}