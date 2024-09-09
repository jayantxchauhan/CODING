#include <iostream>
using namespace std;

class TwoStacks {
    int* arr;
    int size;
    int top1, top2;

public:
    TwoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    void push1(int x) {
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = x;
        } else {
            cout << "Stack Overflow\n";
        }
    }

    void push2(int x) {
        if (top1 < top2 - 1) {
            top2--;
            arr[top2] = x;
        } else {
            cout << "Stack Overflow\n";
        }
    }

    int pop1() {
        if (top1 >= 0) {
            int x = arr[top1];
            top1--;
            return x;
        } else {
            cout << "Stack Underflow\n";
            return -1;
        }
    }

    int pop2() {
        if (top2 < size) {
            int x = arr[top2];
            top2++;
            return x;
        } else {
            cout << "Stack Underflow\n";
            return -1;
        }
    }

    ~TwoStacks() {
        delete[] arr;
    }
};

int main() {
    TwoStacks ts(10);

    ts.push1(5);
    ts.push2(15);
    ts.push1(10);
    ts.push2(20);

    cout << "Popped element from stack 1: " << ts.pop1() << endl;
    cout << "Popped element from stack 2: " << ts.pop2() << endl;

    return 0;
}
