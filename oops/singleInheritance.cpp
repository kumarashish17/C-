#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }
};

// Derived class
class Dog : public Animal {
public:
    void display() {
        cout << "Animal Name: " << name << endl;
        cout << "Dog says: Woof Woof!" << endl;
    }
};

int main() {
    Dog d1;
    d1.setName("Buddy");
    d1.display();
    return 0;
}
