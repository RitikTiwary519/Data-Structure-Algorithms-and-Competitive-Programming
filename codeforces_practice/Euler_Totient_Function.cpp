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
    // tot();
    for (ll i = 0; i < num; i++)
    {
        ll x;
        cin>>x;
        cout<<phi[x]<<endl;
    }
    
    
}