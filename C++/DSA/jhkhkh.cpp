#include <iostream>
#include <string>
using namespace std;
int main() {
    string arr[] = {"hello", "world", "C++", "programming"};
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    // Loop through each string and check its length one by one
    for (int i = 0; i < size; ++i) {
        cout << "Length of string " << i+1 << " (" << arr[i] << "): " << arr[i].length() << endl;
    }

    return 0;
}
