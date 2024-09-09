#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) : value(v) {}  
    friend void display(const Number& num);
};
void display(const Number& num) {
    cout << "Value: " << num.value << endl;
}
int main() {
    int userInput;
    cout << "Enter a number: ";
    cin >> userInput;
    Number num1(userInput);
    display(num1);

    return 0;
}
