#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    long long n,ans=0;
    cin >> n;
    for(long long p=2;p*p<=n;p++){
        int e=0;
        while(n%p==0)
            e++, n/=p;
        for(int i=1;e-i>=0;i++)
            e-=i, ans++;
    }
    if(n>1) ans++;
    cout << ans << "\n";
}