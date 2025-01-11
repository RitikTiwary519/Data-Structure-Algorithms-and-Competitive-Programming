#include <bits/stdc++.h>
using namespace std;


int main()
{
int n;
cin>>n;

vector<bool> is_prime(n+1, true);


int primemax=0;
is_prime[0] = is_prime[1] = false;
for (int i = 2; i<= n; i++) {
    if (is_prime[i]) 
    { 
        primemax++;
        for (int j =2* i; j <= n; j += i)
        {
            is_prime[j] = false;
        }
    }
}
cout<<primemax<<endl;
for(int i=1;i<=n;i++)
{
    if((i)%primemax){
    cout<<(i)%primemax<<" ";
    }
    else
    {
        cout<<primemax<<" ";
    }
}

}