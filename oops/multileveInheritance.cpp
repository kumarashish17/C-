#include <iostream>
using namespace std;
class person{
protected:
    string name;
    int age;
};
class student : public person{
protected:
    int studentID;  
public:
    void setStudentDetails(string n, int a, int id) {
        name = n;
        age = a;
        studentID = id;
    }
};
class graduateStudent : public student {
public:
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << studentID << endl;
    }
};
int main() {
    graduateStudent gs;
    gs.setStudentDetails("Alice", 24, 1001);
    gs.displayDetails();
    return 0;
}