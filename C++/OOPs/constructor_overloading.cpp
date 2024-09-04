#include<iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(float value) {
        real = value;
        imag = value;
    }
    Complex(float r, float i) {
        real = r;
        imag = i;
    }
    Complex add(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    float r1, i1, r2, i2;
    cout << "Enter real and imaginary parts of the first complex number: ";
    cin >> r1 >> i1;
    Complex c1(r1, i1);
    cout << "Enter real and imaginary parts of the second complex number: ";
    cin >> r2 >> i2;
    Complex c2(r2, i2);
    Complex c3 = c1.add(c2);
    cout << "Sum of the complex numbers: ";
    c3.display();
    return 0;
}
