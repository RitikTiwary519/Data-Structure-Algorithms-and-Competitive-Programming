#include <bits/stdc++.h>
using namespace std;
 
int main() {

    int t=1;
    while(t--){
        int n;
        cin >>n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
            cin >>v[i];
 
        int ans = INT_MIN;
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = i+1; j < n; j++){
                if(v[j]<=v[j-1])
                    cnt++;
                else
                    break;    
            }
            for(int j = i-1; j >= 0; j--){
                if(v[j]<=v[j+1])
                    cnt++;
                else    
                    break;    
            }
            // cout<<i<<space<<cnt<<endl;
            ans = max(ans, cnt);
        }    
        cout<<ans+1<<endl;
 
    }
    
    return 0;
}