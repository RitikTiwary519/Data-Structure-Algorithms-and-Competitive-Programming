#include<bits/stdc++.h>
using namespace std;
 
int
main ()
{
  long long int t,n,gc;
  
  cin>>t;
  
  while(t--)
  {
      cin>>n;
      
      long long int arr[n];
      
      for(int i=0; i<n; i++)
      {
          cin>>arr[i];
      }
      
      gc = arr[0];
      
      for(int i=1; i<n; i++)
      {
          gc = __gcd(gc, arr[i]);
      }
      

      
      if(gc == 1)
      {
          cout<<"0"<<endl;
      }
      
      else if( __gcd(gc , n) == 1 )
      {
          cout<<"1"<<endl;
      }
      
      else if( __gcd(gc , n-1) == 1)
      {
          cout<<"2"<<endl;
      }
      
      else 
      {
          cout<<"3"<<endl;
      }
  }
}
 