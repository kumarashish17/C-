#include<iostream>
using namespace std;
class node{
    public:
int val;
int left;
int right;
node(int val){
    this->val=val;
    this->left=NULL;
    this->right=NULL;
}
};

int main(){
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);
 
}