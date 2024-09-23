#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    // Constructor to initialize count
    Counter(int initialCount = 0) : count(initialCount) {}

    // Function to overload the prefix increment operator
    Counter& operator++() {
        ++count; // Increment count
        return *this; // Return the updated object
    }

    // Function to overload the postfix increment operator
    Counter operator++(int) {
        Counter temp = *this; // Create a temporary copy
        count++; // Increment the original object
        return temp; // Return the original value
    }

    // Function to display the count
    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    int initialCount;
    
    // Taking input from the user
    cout << "Enter the initial count value: ";
    cin >> initialCount;

    // Creating Counter object with initial user input
    Counter c(initialCount);

    // Display initial count
    c.display();

    // Using the prefix increment
    ++c;
    cout << "After prefix increment (i.e., ++c): ";
    c.display(); // Output after prefix increment

    // Using the postfix increment
    c++;
    cout << "After postfix increment (i.e., c++): ";
    c.display(); // Output after postfix increment

    return 0;
}
