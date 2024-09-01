#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> target;

    int start = 0, end = n - 1, mid;
    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == target) {
            cout << "Target found at position " << mid;
            return 0;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    cout << "Target not found";
    return 0;
}
