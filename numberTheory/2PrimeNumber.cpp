#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> prime;

void primefun()
{
    for (int i = 2; i < 1000000; i++)
    {
        bool fl=false;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                fl=true;
                break;
            }
        }
        if(fl==false)
        {
            prime.push_back(i);
        }
    }
    
}

int main()
{
  primefun();
  for(auto it: prime)
  {
    cout<<it<<endl;
  }
}