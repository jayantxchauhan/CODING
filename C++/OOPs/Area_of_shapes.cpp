#include <iostream>
#include <cmath>
using namespace std;

double area(double base, double height) {
    return 0.5 * base * height;
}
double area(double radius) {
    return M_PI * radius * radius;
}
double area(double length, double width, bool isRectangle) {
    if (isRectangle) {
        return length * width;
    }
    return 0; 
}

int main() {
    int choice;
    cout << "Select the choice to calculate the area:" << std::endl;
    cout << "1. Triangle" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Rectangle" << endl;
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;
    switch (choice) {
        case 1: { 
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            cout << "Area of the triangle: " << area(base, height) << std::endl;
            break;
        }
        case 2: { 
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle: " << area(radius) << std::endl;
            break;
        }
        case 3: {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            cout << "Area of the rectangle: " << area(length, width, true) << std::endl;
            break;
        }
        default:
            cout << "Invalid choice. Please select 1, 2, or 3." << std::endl;
            break;
    }
    return 0;
}