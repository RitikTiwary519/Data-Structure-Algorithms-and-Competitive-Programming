
#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;
    cout<<"low is "<<arr[low]<<" hi is "<<arr[high]<<" mid is "<<arr[(low+high)/2]<<endl;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] > x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }

        cout<<"low is "<<arr[low]<<" hi is "<<arr[high]<<" mid is "<<arr[mid]<<endl;
    }
    return ans;
}

int main()
{
    vector<int> arr = {0, 0, 0, 0, 1,1,1,1};
    int n = 8, x = 1;
    int ind = lowerBound(arr, n, x);
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}

