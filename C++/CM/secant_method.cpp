#include <iostream>
#include <cmath>
using namespace std;

// Define the function whose root is to be found
double f(double x) {
    // Example function
    return x*x*x - 2*x - 5;
}

int main() {
    double x0, x1, x2, f0, f1, f2, error;
    int maxIter;

    // Input initial guesses, tolerable error, and maximum iterations
    cout << "Enter first guess: ";
    cin >> x0;
    cout << "Enter second guess: ";
    cin >> x1;
    cout << "Enter tolerable error: ";
    cin >> error;
    cout << "Enter maximum iteration: ";
    cin >> maxIter;

    cout << "******************" << endl;
    cout << "Secant Method" << endl;
    cout << "******************" << endl;

    for (int i = 1; i <= maxIter; i++) {
        f0 = f(x0);
        f1 = f(x1);
        x2 = x1 - (f1 * (x1 - x0)) / (f1 - f0); // Secant formula

        cout << "Iteration-" << i << ": x2 = " << x2 << " and f(x2) = " << f(x2) << endl;

        if (fabs(f(x2)) < error) { // Check for convergence
            cout << "\nRoot is: " << x2 << endl;

            // Print name and roll number at the end
            cout << "JAYANT CHAUHAN" << endl;
            cout << "06114802723" << endl;

            return 0; // Exit if converged
        }

        // Update guesses
        x0 = x1;
        x1 = x2;
    }

    cout << "\nRoot is: " << x2 << endl;
    return 0;
}
