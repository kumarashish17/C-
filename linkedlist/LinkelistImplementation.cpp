#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;
    node(int val){
        this->val=val;
        next=NULL;
    }
};

class Stack{
    public:
    node* head;
    int size;
    Stack(){
        head=NULL;
        size=0;
    }
    void push(int val){
        node* newNode=new node(val);
        newNode->next=head;
        head=newNode;
        size++;
    }
    void pop(){
        if(size==0){
            cout<<"Stack underflow"<<endl;
            return;
        }
        head=head->next;
        size--;
    }
    int top(){
        if(size==0){
            cout<<"Stack underflow<<endl";
            return -1;
        }
        return head->val;
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
Stack st;
st.push(10);
st.push(20);
st.push(30);
st.display();
cout<<st.top()<<endl;
st.pop();   
st.display();
cout<<st.top()<<endl;
st.pop();
st.display();
cout<<st.top()<<endl;
}