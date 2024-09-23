#include <iostream>
using namespace std;

class Factorial {
    int number;
    int result;

public:
    Factorial(int num) {
        number = num;
        result = 1;
    }

    void calculateFactorial() {
        for (int i = 1; i <= number; i++) {
            result *= i;
        }
    }

    void displayFactorial() {
        calculateFactorial();
        cout << "The factorial of " << number << " is: " << result << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Factorial fact(num);
    fact.displayFactorial();

    return 0;
}