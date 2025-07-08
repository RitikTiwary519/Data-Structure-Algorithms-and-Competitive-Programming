// Function factor
// Input : n, the number to be factorized
// Output : v, a list of all the prime factors
// v empty list
// for i 2 to b
// pnc do
// while n is divisible by i do
// n n/i
// Add i to the list v
// end
// end
// return v;

#include <bits/stdc++.h>
using namespace std;
#define ll long long

    vector<int> factor(int n) {
	vector<int> ret;
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			ret.push_back(i);
			n /= i;
		}
	}
	if (n > 1) { ret.push_back(n); }
	return ret;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {

  }
}