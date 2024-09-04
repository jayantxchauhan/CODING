#include <iostream>
using namespace std;

class Compare {
    int a, b, c;

public:
    // Setting the data using a function
    void setData(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    // Friend function to find the largest number
    friend int findLargest(Compare obj);
};

int findLargest(Compare obj) {
    if (obj.a > obj.b && obj.a > obj.c)
        return obj.a;
    else if (obj.b > obj.c)
        return obj.b;
    else
        return obj.c;
}

int main() {
    Compare comp;
    int x, y, z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    comp.setData(x, y, z);

    cout << "The largest number is: " << findLargest(comp) << endl;

    return 0;
}
