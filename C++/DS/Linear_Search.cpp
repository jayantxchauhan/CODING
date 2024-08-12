#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
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

    // Input element to search for
    cout << "Enter the element to search: ";
    cin >> target;

    // Search the element
    int position = linearSearch(arr, n, target);

    // Display the result
    if (position != -1) {
        cout << "Element found at position " << position << "." << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
