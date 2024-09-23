#include <iostream>
using namespace std;

class Students {
public:
    int rn; 
    string name;
    static int Nos;

    Students(int x, string y) : rn(x), name(y) {
        Nos += 1; 
        cout << "Number of active students in the program: " << Nos << endl;
    }
    
    ~Students() {
        Nos -= 1; 
        cout << "Student " << rn << " deleted." << endl;
        cout << "Number of active students in the program: " << Nos << endl;
    }
};

int Students::Nos = 0;

int main() {
    int n; 
    string s;

    cout << "Enter roll no. and name of the student: ";
    cin >> n >> s;
    Students obj1(n, s);

    {
        cout << "\nEnter roll no. and name of the student: ";
        cin >> n >> s;
        Students obj2(n, s);
    }

    cout << "\nEnter roll no. and name of the student: ";
    cin >> n >> s;
    Students obj3(n, s);

    return 0;
}
