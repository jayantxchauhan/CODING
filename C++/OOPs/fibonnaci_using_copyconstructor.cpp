
#include <iostream>

using namespace std;

class Fib {
public:
    int a, b;

    Fib() {
        a = 0;
        b = 1;
    }

    Fib(const Fib &x) {
        a = x.b;
        b = x.a + x.b;
    }
};

int main() {
    int n;
    cout << "Enter the number of fibonacci terms: ";
    cin >> n;

    Fib current;
    cout << current.a;

    for (int i = 0; i < n - 1; i++) {
        Fib next(current);
        cout << ", " << next.a;
        current = next;
    }

    cout << endl;
    return 0;
}