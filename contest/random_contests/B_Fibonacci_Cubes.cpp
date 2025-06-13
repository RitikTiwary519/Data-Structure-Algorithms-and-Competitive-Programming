#include <iostream>
#include <vector>
using namespace std;

// Generate first 10 Fibonacci numbers
vector<int> generateFibonacci(int n) {
    vector<int> fib(n);
    fib[0] = 1;
    fib[1] = 2;
    for (int i = 2; i < n; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];
    return fib;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> fib = generateFibonacci(10);  // Precompute first 10 Fibonacci numbers

    while (t--) {
        int n, m;
        cin >> n >> m;

        int largest = fib[n - 1];
        int second_largest = (n >= 2) ? fib[n - 2] : 0;
        int height_requirement = largest + second_largest;

        string result;

        for (int i = 0; i < m; ++i) {
            int w, l, h;
            cin >> w >> l >> h;
            int base = min(w, l);

            if (base >= largest && (n <= 2 || h >= height_requirement))
                result += '1';
            else
                result += '0';
        }

        cout << result << '\n';
    }

    return 0;
}
