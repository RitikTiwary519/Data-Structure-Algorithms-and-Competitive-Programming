#include <bits/stdc++.h>
using namespace std;
const int n=1e6;
#define ll long long 
int main()
{
    ll num;
    cin>>num;
    vector<ll> phi(n + 1);
	for (ll i = 0; i <= n; i++)
		phi[i] = i;

	for (ll i = 2; i <= n; i++) {
		if (phi[i] == i) {
			for (ll j = i; j <= n; j += i)
				phi[j] -= phi[j] / i;
		}
	}
    vector<ll> sum(n,0);
    for (ll i = 0; i < n; i++)
    {
        if(i==0)
        {
            sum[i]=phi[i];
        }
        else
        {
            sum[i]=phi[i]+sum[i-1];
        }
    }
    for (ll i = 0; i < num; i++)
    {
        ll x;
        cin>>x;
        cout<<(sum[x])*(sum[x])<<endl;
    }
    
    

    
    
}