#include <bits/stdc++.h>
#define int long long int
#define pii pair<int, int>
#define mp make_pair
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define fi first
#define se second
#define all(v) v.begin(),v.end()
using namespace std;
const int N=1e6;

int32_t main(){
    fast
    int t;
    cin >> t;

    while (t--) {
      int n;
      cin>>n;
      vector<int> v(n+1);
      for(int i=1;i<=n;i++){
        cin>>v[i];
      }
      
      unordered_map <int,int> diff;
      int sum2=0,sum1=0;
      string ans="NO";
      
      for(int i=1;i<=n;i++){
        if(i&1){
          sum1+=v[i];
        }
        else{
          sum2+=v[i];
        }
        
        int currentDiff=sum1-sum2;
        
        if(currentDiff==0||diff.find(currentDiff)!=diff.end()){
          ans="YES";
          break;
        }
        
        diff[currentDiff]=i;
      }
      
      cout<<ans<<endl;
      
      
    }

    return 0;
}
