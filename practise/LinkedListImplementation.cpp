#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=NULL;
        tail=NULL;
        size = 0;
    }
    void insertTail(int val){
        Node* newNode = new Node(val);
        if(size==0){
            head=tail=newNode;
            size++;
        }
        else{
            tail->next=newNode;
            tail=newNode;
            size++;
        }
    }
    void insertHead(int val){
        Node* newNode = new Node(val);
        if(size==0){
            head=tail=newNode;
            size++;
        }
        else{
            newNode->next=head;
            head=newNode;
            size++;
        }
    }
    void insertAt(int index, int val){
        if(index<0 || index>size){
            cout<<"Invalid Index"<<endl;
            return;
        }
        if(index==0){
            insertHead(val);
            return;
        }
        if(index==size){
            insertTail(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i=1;i<index;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void getIndex(int index){
        if(index<0 || index>=size){
            cout<<"Invalid Index"<<endl;
            return;
        }
        else if(index==0){
            cout<<head->val<<endl;
        }
        else if(index==size-1){
            cout<<tail->val<<endl;
        }
        else{
            Node* temp = head;
            for(int i=0;i<index;i++){
                temp=temp->next;
            }
            cout<<temp->val<<endl;
        }
    }
    void deleteHead(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        head=head->next;
        size--;
    }
    void deleteTail(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp = head;
        for(int i=1;i<size-1;i++){
            temp=temp->next;
        }   
        tail=temp;
        tail->next=NULL;
    }
    void deleteAt(int index){
        if(index<0 || index>=size){
            cout<<"Invalid Index"<<endl;
            return;
        }
        if(index==0){
            deleteHead();
            return;
        }
        if(index==size-1){
            deleteTail();
            return;
        }
        Node* temp = head;
        for(int i=1;i<index;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
    }
    void display(){
        Node* teamp = head;
        while(teamp!=NULL){
            cout<<teamp->val<<" ";
            teamp=teamp->next;
        }
    }
};
int main(){
    LinkedList ll;
    ll.insertTail(10);
    ll.insertTail(20);
    ll.insertHead(5);
    ll.insertTail(30);
    ll.insertAt(2,15);
    ll.getIndex(2);
    ll.deleteHead();
    ll.deleteAt(2);
    ll.deleteTail();
    ll.display();
    
}