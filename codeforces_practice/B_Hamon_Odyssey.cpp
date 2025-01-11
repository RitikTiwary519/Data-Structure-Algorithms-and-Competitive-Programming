#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    

    int t;
    cin>>t;
    while(t--){
        ll n, sum, cnt = 0;
        cin>>n;
        vector < ll > v(n);
        for(ll i = 0 ; i < n; i++) {
            cin>>v[i];
        }
        if(n == 1) {
            cout<<1<<endl;
            continue;
        }
        sum = v[0];
        for(ll i = 0 ; i < n ; i++) {
            sum &= v[i];
            if(sum == 0) {
                cnt++;
                sum = (i+1 < n ? v[i+1]:123);
            }
        }
        if(cnt == 0)
            cnt = 1;
        cout<<cnt<<endl;
    }       
    return 0;
}