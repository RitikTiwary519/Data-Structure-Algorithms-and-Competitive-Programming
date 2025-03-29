#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;

#define int ll



const int mod = 1e9+7;
const int inf = 1e17;
const int mod2 = 1e9+9;

const int N = 1000010;


class SparseTable{
    vector<vector<long long>> st;
    vector<long long> lg;
    long long K;
    
    public:

    SparseTable(vector<long long> &v, ll &n){
        K = 20; // 20 for 2 * 1e5, 25 for 1e7, and so on..
        st.resize(K + 1, vector<long long> (n));
        lg.resize(n + 1);
        preComputeLG(n);
        preCompute(v, n);
    }

    void preComputeLG(long long &n){
        lg[0] = 1;
        for (long long i = 2; i <= n; i++){
            lg[i] = lg[i/2] + 1;
        }
    }

    void preCompute(vector<long long> &v, long long &n){
        // st[i][j] -> range [j, j + (1long long << i) - 1]
        // st[i][j] = st[i-1][j] + st[i-1][j + (1long long << (i-1))];

        copy(v.begin(), v.end(), st[0].begin());

        for(long long i = 1; i <= K; ++i){
            for(long long j = 0; j + (1ll << i) <= n; ++j){
                st[i][j] = __gcd(st[i-1][j], st[i-1][j + (1ll << (i - 1))]);
            }
        }
    }

    // 0 - based indexing use for call function
    long long query(long long l, long long r){
        // sum query
        // long long sum = 0;
        // for (long long i = K; i >= 0; i--) {
        //     if ((1 << i) <= R - L + 1) {
        //         sum += st[i][L];
        //         L += 1 << i;
        //     }
        // }

        // for idempotent functions like min, max, gcd, bitwise and, bitwise or, etc...
        long long i = lg[r - l + 1];
        long long mn = __gcd(st[i][l], st[i][r - (1 << i) + 1]);
        return mn;
    }
};
void solve(){
   int n, q;
   cin>>n>>q;
 
   int a[n+1];
   vector<int>v;
   v.push_back(0);
   for(int i=0;i<n;i++)
   {
       cin>>a[i];

       if(i)
       v.push_back(abs(a[i]-a[i-1]));
   }
  //  for(auto it:v)
  //   cout<<it<<" ";
  // cout<<"\n";

   SparseTable st(v,n);

   while(q--){
    int l,r;
    cin>>l>>r;

    
    if(l==r){
      cout<<"0 ";
    }
    else{
    r--;
    cout<<st.query(l,r)<<" ";
    }

   }
   cout<<"\n";
}


signed main() {

    
    int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;

}