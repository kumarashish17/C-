#include<iostream>
using namespace std;
class student{
    public:
    int age;
    int roll;
    string name;
    int static totalStudents; // Static member to keep track of total students
    student(int age, int roll, string name){
        this->age=age;
        this->roll=roll;
        this->name=name;
        totalStudents++; // Increment total students count
    }
    void display(){
        cout<<"Name: "<<name<<", Age: "<<age<<", Roll: "<<roll<<endl;
    }
};
int student::totalStudents = 0; // Initialize static member
int main(){
    student s1(20,20,"Adity"); 
    student s2(20,01,"Ashish");
    s1.display();
    s2.display();
    cout << "Total Students: " << student::totalStudents << endl; // Accessing static member
    return 0;
}