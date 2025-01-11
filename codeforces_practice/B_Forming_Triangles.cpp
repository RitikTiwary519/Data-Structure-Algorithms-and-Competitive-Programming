#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
       int n;
long long ans = 0;
cin >> n;
vector<long long>ar (n), freq(n*3); 
for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
sort(ar.begin() ,ar.end()); for (int i = 0; i < n-1; i++)

for(int i=0;i<n-1;i++)
{
freq[ar[i]] += 1; if (ar[i]==ar[i+1]);
ans += freq[ar[i]];
}
cout << ans << endl;
    }
    

}