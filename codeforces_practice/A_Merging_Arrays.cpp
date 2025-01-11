#include <iostream>
#include <vector>

using namespace std;

vector<int> merge_arrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged_array;
    int ptr1 = 0;
    int ptr2 = 0;
    
    while (ptr1 < arr1.size() && ptr2 < arr2.size()) {
        if (arr1[ptr1] <= arr2[ptr2]) {
            merged_array.push_back(arr1[ptr1]);
            ptr1++;
        } else {
            merged_array.push_back(arr2[ptr2]);
            ptr2++;
        }
    }
    
    // Append remaining elements of arr1
    while (ptr1 < arr1.size()) {
        merged_array.push_back(arr1[ptr1]);
        ptr1++;
    }
    
    // Append remaining elements of arr2
    while (ptr2 < arr2.size()) {
        merged_array.push_back(arr2[ptr2]);
        ptr2++;
    }
    
    return merged_array;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> arr1(n);
    vector<int> arr2(m);
    
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    
    // Merge arrays
    vector<int> merged = merge_arrays(arr1, arr2);
    
    // Print merged array
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
