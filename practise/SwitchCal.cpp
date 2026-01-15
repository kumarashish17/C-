#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"enter operator";
    cin>>op;
    switch(op){
        case '+':
        cout<<"addition is "<<a+b;
        break;
        case '-':
        cout<<"subtraction is "<<a-b;
        break;
        case '*':
        cout<<"multiplication is "<<a*b;
        break;
        case '/':
        if(b!=0){
            cout<<"division is "<<a/b;
        }
        else{
            cout<<"division by zero is not allowed";
        }
        break;
        default:
        cout<<"invalid operator";
    }
}