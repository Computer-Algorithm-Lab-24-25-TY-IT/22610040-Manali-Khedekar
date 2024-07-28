#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(const vector<int>& arr, int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);

      return binarySearch(arr, mid + 1, high, x);
    }
    return -1;
}

int main() {
    int n, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> x;
    sort(arr.begin(), arr.end());

    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1)
        cout << "Element is present at index " << result << endl;
    else
        cout << "Element is not present in the array" << endl;

    return 0;
}

