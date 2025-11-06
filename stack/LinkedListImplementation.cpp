#include <iostream>
using namespace std;

class node {
public:
    int value;
    node* next;
    node(int value) {
        this->value = value;
        next = NULL;
    }
};

class Stack {
public:
    node* head;
    int size;

    Stack() {
        head = NULL;
        size = 0;
    }

    void push(int val) {
        node* newNode = new node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void pop() {
        if (size == 0) {
            cout << "Stack Underflow" << endl;
            return;
        }
        node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    int top() {
        if (size == 0) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return head->value;
    }

    bool isEmpty() {
        return size == 0;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << endl; // Output: 30

    s.pop();
    cout << s.top() << endl; // Output: 20

    return 0;
}
