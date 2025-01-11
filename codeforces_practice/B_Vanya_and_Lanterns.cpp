#include <bits/stdc++.h>
#define ld long double
#define pb push_back
using namespace std;
int main()
 {   
	 ld n,m,b,ma=0,c;
	 cin>>n>>m;
	 vector < ld > v(n,0.0);
	 for(ld i=0 ; i < n ; i++)
	 {
		 cin>>v[i];
	 }
	 sort(v.begin(),v.end());
	  for(ld i=0 ; i+1 < n ; i++)
	  {
		 if((v[i+1]-v[i])>ma)
			ma=(v[i+1]-v[i]);
	  }
	 ma=ma/2;
	 b=v[0];
	 c=m-v[n-1];
	 ma=max(ma,max(b,c));
	 cout<<fixed<<setprecision(10)<<ma;
	
     return 0;
          
 } 