#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while (t--)
   {
   int size;
   cin>>size;
   vector<int> vec(size,0);
   for (int i = 0; i < size; i++)
   {
    int a;
    cin>>a;
    vec[i]=a;
   }

   sort(vec.begin(),vec.end());




   if(vec[0]<0)
   {
    cout<<vec[0]<<endl;
   }
   else{
    cout<<vec[size-1]<<endl;
   }
   
   }
    
}