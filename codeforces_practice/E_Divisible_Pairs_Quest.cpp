#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long L, R, K;
    cin >> L >> R >> K;

    for (long long x = L; x <= R; x++) {
        long long g = __gcd(K, x); 
        int newK = K / g; 
        if (newK == 1) {  
            cout << x << " " << x << endl;
            return;
        }
        else
        {
            long long y = L + (newK - x % newK); 
            if (y <= R) {  
                cout << x << " " << y << endl;
                return;
            }
        }
    }
    cout << -1 << endl;  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
