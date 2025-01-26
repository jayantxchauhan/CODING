#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* s;
    int length;

public:
    String(const char* str = "") {
        length = strlen(str);
        s = new char[length + 1];
        strcpy(s, str);
    }

    ~String() {
        delete[] s;
    }

    String operator+(String& other) {
        int newLength = length + other.length;
        char* result = new char[newLength + 1];
        strcpy(result, s);
        strcat(result, other.s);
        return String(result);
    }

    String& operator=(String& other) {
        if (this != &other) {
            delete[] s;
            length = other.length;
            s = new char[length + 1];
            strcpy(s, other.s);
        }
        return *this;
    }

    bool operator<=(String& other) const {
        return strcmp(s, other.s) <= 0;
    }

    void displayLength() const {
        cout << "Length of string: " << length << endl;
    }

    void tolower() {
        for (int i = 0; i < length; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32;
            }
        }
    }

    void toupper() {
        for (int i = 0; i < length; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] -= 32;
            }
        }
    }

    void display(){
        cout << "String: " << s << endl;
    }
};

int main() {
    char str1[100], str2[100];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    String s1(str1);
    String s2(str2);

    s1.display();
    s1.displayLength();

    s1.tolower();
    s1.display();

    s1.toupper();
    s1.display();

    String concatenatedStr = s1 + s2;
    concatenatedStr.display();
    concatenatedStr.displayLength();

    if (s1 <= s2) {
        cout << "s1 is less than or equal to s2" << endl;
    } else {
        cout << "s1 is greater than s2" << endl;
    }

    return 0;
}