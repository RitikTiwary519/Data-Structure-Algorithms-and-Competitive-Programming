#include <bits/stdc++.h>
using namespace std;
const int n=1e9+8;
   vector<bool> is_prime(n+1, true);

int main()
{

is_prime[0] = is_prime[1] = false;
for (int i = 2; i * i <= n; i++) {
    if (is_prime[i]) {
        cout<<i<<endl;
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}
    // for(int i=0;i<1e8;i++)
    // {
    //     if(isprime[i])
    //     {
    //         cout<<i<<endl;
    //     }
    // }
}