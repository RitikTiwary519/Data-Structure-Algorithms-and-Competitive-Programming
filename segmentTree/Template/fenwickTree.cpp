#include <iostream>
#include <vector>

using namespace std;

class FenwickTree {
    vector<int> bit;
    int n;

public:
    FenwickTree(int _n) {
        n = _n;
        bit.assign(n + 1, 0); 
    }
    
    void update(int id, int val) {
        while (id <= n) {
            bit[id] += val;
            id += (id & -id);
        }
    }

    int query(int id) {
        int sum = 0;
        while (id > 0) {
            sum += bit[id];
            id -= (id & -id);
        }
        return sum;
    }
};

int main() {
    int n = 10;
    FenwickTree ft(n);


    ft.update(1, 5);
    ft.update(2, 3);
    ft.update(3, 7);

    // Example queries
    cout << "Sum of first 3 elements: " << ft.query(3) << endl;
    cout << "Sum of first 5 elements: " << ft.query(5) << endl;

    return 0;
}