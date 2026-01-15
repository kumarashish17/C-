#include <iostream>
using namespace std;

class student {
public:
    int age;
    int* roll;
    string name;

    // Constructor
    student(int age, int roll, string name) {
        this->age = age;
        this->roll = new int(roll);
        this->name = name;
    }

    // Destructor
    ~student() {
        delete roll;
    }
};
int main() {
    student* s1 = new student(20, 20, "Adity");
    student* s2 = new student(20, 1, "Ashish");

    cout << "Student 1: " << s1->name << ", Age: " << s1->age << ", Roll: " << *(s1->roll) << endl;
    cout << "Student 2: " << s2->name << ", Age: " << s2->age << ", Roll: " << *(s2->roll) << endl;

    delete s1; // Calls destructor for s1
    delete s2; // Calls destructor for s2

    return 0;
}