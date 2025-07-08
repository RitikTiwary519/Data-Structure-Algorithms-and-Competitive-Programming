#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int n=10000000;
vector<bool> is_prime(n+1, true);
void fun()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) //because all numbers less than i*i already would have been sieved because there might exist a smaller prime number
                is_prime[j] = false;
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int val;
        cin>>val;
        int cnt=0;
        for (int i = 0; i*i < val; i++)
        {
            for(int j=0;j*j*j*j<val;j++)
            {
                if(is_prime[i*i+j*j*j*j])
                {
                    cnt++;
                    is_prime[i*i+j*j*j*j]=0;
                }
            }
        }
        cout<<cnt<<endl;
        
    }
    
}