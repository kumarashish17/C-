#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    third->next=fourth;
    fourth->prev=third;
    //Traversal forward
    Node* temp = first;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
    //Traversal backward
    temp=fourth;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    return 0;
}