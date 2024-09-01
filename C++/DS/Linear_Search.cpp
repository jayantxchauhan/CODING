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
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> target;
    int position = linearSearch(arr, n, target);
    if (position != -1) {
        cout << "Element found at position " << position << "." << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
