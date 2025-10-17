#include<iostream>
using namespace std;
class student{
    public:
    int age;
    int roll;
    string name;
    student(int age, int roll, string name){
        this->age=age;
        this->roll=roll;
        this->name=name;
    }
};

int main(){
student s1(20,01,"Adity"); 
student s2(20,20,"Ashish");
cout<<"Student 1: "<<s1.name<<", Age: "<<s1.age<<", Roll: "<<s1.roll<<endl;
cout<<"Student 2: "<<s2.name<<", Age: "<<s2.age<<", Roll: "<<s2.roll<<endl;

return 0;
}