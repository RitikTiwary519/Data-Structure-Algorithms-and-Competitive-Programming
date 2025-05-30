#include<bits/stdc++.h>
#include<math.h>
#define ll  long long 
#define cy cout<<"YES"<<endl;
#define meetsarvan ios_base::sync_with_stdio(false);cin.tie(NULL);
#define cn cout<<"NO"<<endl;
#define c(a,b) printf("%d %d",a,b);
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define mod 1000000007
#define in(a) ll a; cin>>a;
#define inar(n) ll a[n]; fli(0,n) cin>>a[i]; 
#define fli(a,b) for(ll int i=a;i<b;i++)
#define flj(a,b) for(ll int j=a;j<b;j++)
#define rfli(a,b) for(ll int i=a-1;i>=b;i--)
#define pb push_back
#define eb emplace_back
#define la(n) ll a[n];fli(0,n) cin>>a[i];
#define vec(n) vector<ll>v(n); fli(0,n) cin>>v[i];
using namespace std;
bool isPrime(ll n){
  if(n < 2) return false;
  if(n <= 3) return true;
  if(n%2 == 0 || n%3 == 0) return false;
  for(ll i = 5; i*i <= n; i+=6){
    if(n%i == 0 || n%(i+2) == 0) return false;
  }
  return true;  
}
//=======================^=============================================================^=======================\\
 
// start your code from here 
 
void solve()
{
  ll n; cin>>n;
 char a[n][n];
  fli(0,n)
  {
      flj(0,n)
      {
          cin>>a[i][j];
      }
  }
  ll ans=0;
  fli(0,n)
  {
      flj(0,n)
      {
          ll c=0,c1=0;
          if(a[i][j]=='0') c++;
          else c1++;
          if(a[n-1-i][n-1-j]=='0') c++;
          else c1++;
          if(a[n-1-j][i]=='0') c++;
          else c1++;
          if(a[j][n-1-i]=='0') c++;
          else c1++;
          if(c1==4||c==4) continue;
          else 
          {
            //   cout<<i<<" " <<j<<"->"<<a[i][j]<<" ";
            //   cout<<n-1-i<<" " <<n-1-j<<"->"<<a[n-1-i][n-1-j]<<" ";
            //     cout<<n-1-j<<" " <<i<<"->"<<a[n-1-j][i]<<" ";
            //     cout<<j<<" " <<n-1-i<<"->" <<a[n-1-i][n-1-j]<<" ";
            //     cout<<endl;
              ans+=min(c,c1);
              a[i][j]='1';
              a[n-1-i][n-1-j]='1';
              a[n-1-j][i]='1';
              a[j][n-1-i]='1';
          }
          
      }
// 11101
// 11011
// 01011
// 10011
// 11011
     // cout<<ans<<endl;
  }
//   fli(0,n)
//       {
//           flj(0,n)
//           {
//               cout<<a[i][j];
//           }
//           cout<<endl;
//       }
cout<<ans<<endl;
}
 //code ends here
int main()
 {
     meetsarvan
	int t=1;
	cin>>t;
	
	while(t--)
	{
	  solve();
	}
}