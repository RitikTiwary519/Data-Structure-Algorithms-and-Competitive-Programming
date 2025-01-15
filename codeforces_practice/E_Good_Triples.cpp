#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string n;
        cin>>n;
        vector<ll> dp(30,0);

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                for (int k = 0; k < 10; k++)
                {
                    dp[i+j+k]++;
                }
            }
            
        }
        ll ans=1;

        for(auto it: n)
        {
            ans*=dp[it-'0'];
        }
        cout<<ans<<endl;  
        
    }
    
}