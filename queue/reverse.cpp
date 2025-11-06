#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void displayQueue(queue<int> q){
   int size = q.size();
   for(int i=1; i<=size; i++){
    int x = q.front();
    cout<<x<<" ";
    q.pop();
    q.push(x);
   }
    cout<<endl;
}
void reverse(queue<int>&q){
    stack<int> s;
    while(q.size()>0){
        int x = q.front();
        q.pop();
        s.push(x);
    }
    while(s.size()>0){
        int x = s.top();
        s.pop();
        q.push(x);
    }
}
int main(){
    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);
    displayQueue(q);
    reverse(q);
    displayQueue(q);
}