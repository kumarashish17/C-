#include<iostream>
using namespace std;
class stack{
    public:
    int arr[100];
    int idx;
    stack(){
        idx=-1;
    }
    void push(int val){
        if(idx==sizeof(arr)/sizeof(int)-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[idx];
    }
};
int main(){
stack s;
s.push(10); 
s.push(20);
s.push(30);
cout<<s.top()<<endl; //30
}