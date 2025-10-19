#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>s){
    stack<int>temp;
    while(s.size()>0){
        temp.push(s.top());
        s.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<endl;
        temp.pop();
    }
    
    }
void pushAtIdx(stack<int>&s,int data,int idx){
    stack<int>temp;
    while(s.size()>idx){
        temp.push(s.top());
        s.pop();
    }
    s.push(data);
    while(temp.size()>0){
        s.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    print(s);
    cout<<"After pushing at index 2"<<endl;
    pushAtIdx(s,5,2);
    print(s);

}