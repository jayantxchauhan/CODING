#include <iostream>

using namespace std;

class MyClass {
public:
    static int c;
    int data;

    MyClass() {
        c+=1;
        cout << "Constructor for object "<<c<< " called" << endl;
    }

    ~MyClass() {
        cout << "Destructor for object "<<c<< " called" << endl;
        c-=1;
    }
};

int MyClass::c=0;

void* operator new(size_t size) {
    void* ptr = malloc(size);
    cout << "Overloaded new operator called" << endl;
    return ptr;
}

void operator delete(void* ptr) {
    free(ptr);
    cout << "Overloaded delete operator called" << endl;
}

int main() {
    MyClass* obj1 = new MyClass;
    MyClass* obj2 = new MyClass;

    delete obj1;
    delete obj2;

    return 0;
}