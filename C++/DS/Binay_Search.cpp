#include <iostream>
#include <algorithm>  // For std::sort
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n, target;

    // Read array size
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Read array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array for binary search
    sort(arr, arr + n);

    // Input element to search for
    cout << "Enter the element to search: ";
    cin >> target;

    // Search the element
    int position = binarySearch(arr, n, target);

    // Display the result
    if (position != -1) {
        cout << "Element found at position " << position << "." << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
