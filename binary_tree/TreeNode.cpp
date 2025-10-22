#include<iostream>
#include<climits>
using namespace std;
class node{
public:
    int val;
    node* left;
    node* right;
    node(int v){
       this->val = v;
       this->left = NULL;
       this->right = NULL;
    }
};
void display(node* root){ 
     if(root == NULL) return;
     cout << root->val << " ";
     display(root->left);
     display(root->right);
    

}
int sum(node* root){
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}
int size(node* root){
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int maxInTree(node* root){
    if(root == NULL) return INT_MIN;
    int leftMax = maxInTree(root->left);
    int rightMax = maxInTree(root->right);
    int treeMax = max(root->val, max(leftMax, rightMax));
    return treeMax;
}
int level(node* root){
    if(root == NULL) return 0;
    int leftLevel = level(root->left);
    int rightLevel = level(root->right);
    return 1 + max(leftLevel, rightLevel);
}
int main(){
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    display(a);
    cout << endl;
    cout<<sum(a);
    cout << endl;
    cout<<size(a);
    cout << endl;
    cout<<maxInTree(a);
    cout << endl;
    cout<<level(a);
}