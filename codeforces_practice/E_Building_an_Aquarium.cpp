#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    

    ll t;
    cin>>t;
    
    while(t--){
        ll n,avail_water,l = 1;
        ll r = 0;
        cin>>n>>avail_water;
        vector < ll > coral_ht(n);
        for(ll i = 0 ; i < n ; i++) {
            cin>>coral_ht[i];
        }
        r = 1e10;
        ll ans = 0;
        while(l <= r) {

            ll total_water = 0;
            ll mid_ht = l+(r-l)/2;
            for(ll i = 0 ; i < n ; i++) {
                if(coral_ht[i] < mid_ht) {
                    total_water+=(mid_ht-coral_ht[i]);
                }
            }
            if(total_water > avail_water) {
                r=mid_ht-1;
            }
            else {
                ans = mid_ht;
                l=mid_ht+1;
            }
        }
        cout<<ans<<endl;
    }  
    return 0;
}