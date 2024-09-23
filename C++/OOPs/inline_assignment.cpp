#include <iostream>
using namespace std;

class Num {
    int num;
public:
    Num(int x) : num(x) {} 
    friend int cube(Num);
};

inline int cube(Num x) {
    return (x.num) * (x.num) * (x.num); 
}

int main() {
    int p;
    cout << "Enter the number: ";
    cin >> p;
    Num num1(p);
    cout << "\nThe cube of the number is: " << cube(num1) << endl;
    return 0;
}
