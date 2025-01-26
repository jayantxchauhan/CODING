#include <iostream>
using namespace std;
class numbers {
private:
int a, b, c;
public:
numbers(int x, int y, int z) : a(x), b(y), c(z) {}
void display() {
cout << "\na= " << a<<", b= "<<b<<", c= "<<c;
}
numbers& operator++() {
a+=1; b+=1; c+=1;
return *this;
}
numbers operator++(int) {
numbers temp = *this;
a+=1; b+=1; c+=1;
return temp;
}
};
int main() {
int x, y, z;
cout << "Enter the three numbers: ";
cin >> x >> y >> z;
numbers n1(x, y, z);
cout << "Initial values: ";
n1.display();
cout << "\n\nAfter prefix increment: ";
(++n1).display();
cout << "\n\nAfter postfix increment: ";
(n1++).display();
n1.display();
return 0;
}