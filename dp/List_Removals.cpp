#include <iostream>
#include <vector>
using namespace std;

vector<int> segmentTree;
vector<int> PRESENT;

void build_tree(int node, int start, int end) {
    if (start == end) {
        // Leaf node will have a single element
        segmentTree[node] = PRESENT[start];
    } else {
        int mid = (start + end) / 2;
        build_tree(2 * node, start, mid);
        build_tree(2 * node + 1, mid + 1, end);
        segmentTree[node] = segmentTree[2 * node] + segmentTree[2 * node + 1];
    }
}

int query_tree(int node, int start, int end, int l, int r) {
    if (r < start || end < l) {
        return 0; 
    }
    if (l <= start && end <= r) {
        return segmentTree[node];
    }
    int mid = (start + end) / 2;
    int p1 = query_tree(2 * node, start, mid, l, r);
    int p2 = query_tree(2 * node + 1, mid + 1, end, l, r);
    return p1 + p2;
}

void update_tree(int node, int start, int end, int idx) {
    if (start == end) {
        PRESENT[idx] = 0;
        segmentTree[node] = 0;
    } else {
        int mid = (start + end) / 2;
        if (start <= idx && idx <= mid) {
            update_tree(2 * node, start, mid, idx);
        } else {
            update_tree(2 * node + 1, mid + 1, end, idx);
        }
        segmentTree[node] = segmentTree[2 * node] + segmentTree[2 * node + 1];
    }
}

int find_and_delete_xth_element(int x, int n) {
    int node = 1, start = 0, end = n - 1;
    while (start != end) {
        int mid = (start + end) / 2;
        if (segmentTree[2 * node] >= x) {
            node = 2 * node;
            end = mid;
        } else {
            x -= segmentTree[2 * node];
            node = 2 * node + 1;
            start = mid + 1;
        }
    }
    update_tree(1, 0, n - 1, start);
    return start;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    PRESENT.resize(n, 1);
    segmentTree.resize(4 * n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    build_tree(1, 0, n - 1);

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        int idx = find_and_delete_xth_element(x, n);
        cout << arr[idx] << " ";
    }

    return 0;
}