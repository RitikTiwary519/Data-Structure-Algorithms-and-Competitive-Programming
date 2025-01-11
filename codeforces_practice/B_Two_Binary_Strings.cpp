#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){;
        string a,b;
        ll f=0;
        cin>>a>>b;
        for(ll i = 0 ; i < (ll)a.size() ; i++) {
            if((a[i] == '0' and b[i] == '0') and (a[i+1] == '1' and b[i+1] == '1')) {
                f = 1;
                break;
            }
        }
        if(f)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }       
    return 0;
}