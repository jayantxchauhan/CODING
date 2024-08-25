#include <iostream>
#include <iomanip> // for std::fixed and std::setprecision

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
    // Constructor to initialize student data
    Student() {
        // Default constructor
    }

    // Method to input student details
    void inputDetails() {
        cout << "Enter name: ";
        cin.ignore(); // Clear the input buffer
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

    // Function to calculate percentage
    float calculatePercentage() const {
        float total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        return (total / 500.0) * 100; // 500 is the total marks (5 subjects * 100 each)
    }

    // Function to display student details if percentage > 70
    void displayIfEligible() const {
        float percentage = calculatePercentage();
        if (percentage > 70) {
            cout << "Name: " << name << endl;
            cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
        }
    }
};

int main() {
    const int numStudents = 3; // Number of students
    Student students[numStudents];

    // Input student details
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