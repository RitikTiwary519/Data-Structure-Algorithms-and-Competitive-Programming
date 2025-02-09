#include <bits/stdc++.h>
using namespace std;

int lis = 0;
int a[1000000];
multiset<int> s;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	//sort(a, a + n, greater<int>());
	// finding the LIS of a reversed array = finding the LDS
	for (int i = 0; i < n; i++) {
		if (s.upper_bound(a[i]) == s.end()) lis++;
		else s.erase(s.upper_bound(a[i]));
		s.insert(a[i]);
	}
	cout << lis<<endl;