#include<iostream>
#include<queue>
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
int main(){
    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);
    displayQueue(q);
}