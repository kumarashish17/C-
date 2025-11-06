#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"Front element: "<<q.front()<<endl; // Outputs 10
    cout<<"Back element: "<<q.back()<<endl;   // Outputs 30
    cout<<"Queue size: "<<q.size()<<endl;     // Outputs 3
    q.pop();
    cout<<"Front element after pop: "<<q.front()<<endl; // Outputs 20
    cout<<"Queue size after pop: "<<q.size()<<endl;     // Outputs 2
    return 0;
}