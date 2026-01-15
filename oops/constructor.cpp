#include<iostream>
using namespace std;
class student{
    int age;
    int roll;
    string name;
    public:
    student(int age, int roll, string name){
        this->age=age;
        this->roll=roll;
        this->name=name;
    }   
    void display(){
        cout<<"Name: "<<name<<", Age: "<<age<<", Roll: "<<roll<<endl;
    }
};
int main(){
    student s1(20,20,"Adity"); 
    student s2(20,01,"Ashish");
    s1.display();
    s2.display();
    return 0;
}