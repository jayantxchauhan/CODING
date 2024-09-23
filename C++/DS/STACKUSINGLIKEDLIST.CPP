#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

class Stack {
    Node* head;

public:
    Stack() { this->head = nullptr; }
    bool isEmpty() {
    
        return head == nullptr;
    }
    void push(int new_data) {

        Node* new_node = new Node(new_data);
        if (!new_node) {
            cout << "\nStack Overflow";
        }

        new_node->next = head;
        head = new_node;
    }
    void pop() {
        if (this->isEmpty()) {
            cout << "\nStack Underflow" << endl;
        }
        else {

            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    int peek() {
        if (!isEmpty())
            return head->data;
        else {
            cout << "\nStack is empty";
            return INT_MIN;
        }
    }
};
int main() {
        Stack st;
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);


    cout << "Top element is " << st.peek() << endl;
      cout << "Removing two elements..." << endl;
    st.pop();
    st.pop();
    cout << "Top element is " << st.peek() << endl;

    return 0;
}
