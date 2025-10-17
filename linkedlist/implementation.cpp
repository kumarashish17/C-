#include<iostream>
using namespace std;
class node{
    public:
int value;
node* next;
node(int value){
    this->value=value;
    next=NULL;
}
};
class linkedlist{
    public:
node* head;
node* tail;
int size=0;
linkedlist(){
    head= tail =NULL;
    size=0;
}
void insertAtend(int val){
    node* newNode=new node(val);
    if(size==0){
        head=tail=newNode;
    }
    else{
       tail->next=newNode;
       tail=newNode;
    }
    size++;
}
void insertAthead(int val){
    node* newNode=new node(val);
    if(size==0){
        head=tail=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
    size++;}
void insertAtIdx(int val, int idx){
    if(idx<0 || idx>size) cout<<"Invalid Index<<endl";
    else if(idx==0) insertAthead(val);    
    else if(idx==size) insertAtend(val);
    else{
       node* t = new node(val);
       node* temp=head;
         for(int i=0;i<idx-1;i++){
          temp=temp->next;
         }
            t->next=temp->next;
            temp->next=t;
            size++; 

    }
}
int getInx(int idx){
    if(idx<0 || idx>=size) {
        cout<<"Invalid Index"<<endl;
        return -1;
    }
    else if(idx==0) return head->value;
    else if(idx==size-1) return tail->value;

    else{
        node* temp=head;
        for(int i=0;i<idx;i++){
            temp=temp->next;
        }
        return temp->value;
    }
}
void deleteAthead(){
    if(size==0) cout<<"List is empty"<<endl;
    else if(size==1){
        head=tail=NULL;
        size--;
    }
    else{
        node* temp=head;
        head=head->next;
        delete temp; 
        size--;
    }
}
void display(){
    node* newNode=head;
    while(newNode!=NULL){
        cout<<newNode->value<<endl;
        newNode=newNode->next;
    }
}
};
int main(){
linkedlist ll;
ll.insertAtend(10);
ll.insertAtend(20);
ll.insertAtend(30);
ll.insertAtend(40);
ll.insertAthead(5);
ll.insertAthead(1);
ll.display();
ll.insertAtIdx(25,3);
ll.display();
cout<<ll.getInx(3);
}