#include <iostream>
#include <iomanip> 
using namespace std;

class Student {
private:
    string name;
    string branch;
    int rollNumber;
    int age;
    char gender;
    float marks[5];

public:
    Student() {
       
    }
    void inputDetails() {
        cout << "Enter name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter branch: ";
        getline(cin, branch);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter gender (M/F): ";
        cin >> gender;
        cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; ++i) {
            cin >> marks[i];
        }
    }

    float calculatePercentage() const {
        float total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        return (total / 500.0) * 100; 
    }

   
    void displayIfEligible() const {
        float percentage = calculatePercentage();
        if (percentage > 70) {
            cout << "Name: " << name << endl;
            cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
        }
    }
};

int main() {
    const int numStudents = 3; 
    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].inputDetails();
    }

    cout << "\nStudents with more than 70% marks:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        students[i].displayIfEligible();
    }

    return 0;
}