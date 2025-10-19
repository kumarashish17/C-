#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> s){
    if(s.size()==0)return;
    int x=s.top();
    cout<<x<<endl;
    s.pop();
    display(s);
    s.push(x);
} 
void pushAtbottom(stack<int>&s,int data){
    if(s.size()==0){
        s.push(data);
        return;
    }
    int x=s.top();
    s.pop();
    pushAtbottom(s,data);
    s.push(x);

}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    pushAtbottom(s,5);
    display(s);
}