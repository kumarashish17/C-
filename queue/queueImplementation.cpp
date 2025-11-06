#include <iostream>
#include <vector>
using namespace std;

class Queue {
public:
    int f;
    int r;  
    vector<int> arr;

    Queue(int val) {
        f = 0;
        r = 0;
        arr = vector<int>(val);
    }

    void push(int val) {
        if (r == arr.size()) {
            cout << "Queue Overflow" << endl;
            return;
        }
        arr[r] = val;
        r++;
    }

    void pop() {
        if (f == r) {
            cout << "Queue Underflow" << endl;
            return;
        }
        f++;
    }

    int front() {
        if (f == r) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[f];
    }

    int size() {
        return r - f;
    }

    bool isEmpty() {
        return f == r;
    }

    void display() {
        if (f == r) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = f; i < r; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);
    q.push(10); 
    q.push(20);
    q.push(30);
    q.display(); // Outputs: 10 20 30
    return 0;
}
