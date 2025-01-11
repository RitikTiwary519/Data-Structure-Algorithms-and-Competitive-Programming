#include <bits/stdc++.h>
using namespace std;


int main()
{
int n;
cin>>n;

vector<bool> is_prime(n+1, true);
vector<int> division(n+1,0);
int ans=0;
is_prime[0] = is_prime[1] = false;
for (int i = 2; i<= n; i++) {
    if (is_prime[i]) 
    { 
        for (int j =2* i; j <= n; j += i)
        {
            is_prime[j] = false;
            division[j]++;
            if(division[j]==2)
            {
                ans++;  
            }
        }
    }
}
cout<<ans<<endl;

}