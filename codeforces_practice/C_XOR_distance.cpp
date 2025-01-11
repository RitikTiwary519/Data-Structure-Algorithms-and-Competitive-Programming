#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
      ll a, b, r;
      cin >> a >> b >> r;
      if (a < b) swap(a, b);
      ll ans = 0;
      ll x = 0;
      bool first = true;
      for (ll j = 60; j >= 0; --j) 
      {
        ll mask = (1LL << j);
        bool a_b = (a & mask);
        bool b_b = (b & mask);
        if (a_b && !b_b) 
        {
          if (first)
          {
            first = false;
            continue;
          }
          if (x + mask <= r)
          {
            x += mask;
            a ^= mask;
            b ^= mask;
          }
        }
      }
      cout << a - b << endl;
    }
	return 0;
}