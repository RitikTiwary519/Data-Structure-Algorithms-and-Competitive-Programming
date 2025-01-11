#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        long long sum=0;
        long x=1000000000;
        long y=1000000000;
        for(int i=0;i<n;i++){
            long m;
            cin>>m;
            long a[m];
            for(long j=0;j<m;j++){
                cin>>a[j];
            }
            sort(a,a+m);
            sum=sum+a[1];
            x=min(x,a[1]);
            y=min(y,a[0]);
        }
        
        cout<<(long long)y+sum-x<<endl;
        }
    return 0;
}