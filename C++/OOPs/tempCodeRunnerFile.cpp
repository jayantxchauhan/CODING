#include <iostream>
using namespace std;

class Class2;

class Class1 {
    int num1;

public:
    void setData() {
        cout << "Enter a number for Class1: ";
        cin >> num1;
    }
   
    friend void findGreatest(Class1, Class2);
};

class Class2 {
    int num2;
public:
    void setData() {
        cout << "Enter a number for Class2: ";
        cin >> num2;
    }

    friend void findGreatest(Class1, Class2);
};

void findGreatest(Class1 c1, Class2 c2) {
    if (c1.num1 > c2.num2)
        cout << "The greatest number is: " << c1.num1 << endl;
    else if (c1.num1 < c2.num2)
        cout << "The greatest number is: " << c2.num2 << endl;
    else
        cout << "Both numbers are equal." << endl;
}

int main() {
    Class1 obj1;
    Class2 obj2;
    obj1.setData();
    obj2.setData();
    findGreatest(obj1, obj2);
    return 0;
}
