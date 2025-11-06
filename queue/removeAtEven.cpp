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
void removeAtEven(queue<int>& q){
    int n = q.size();
    for(int i=0; i<n; i++){
        if(i%2!=0){
            int x = q.front();
            q.pop();
            q.push(x);
        }
        else{
            q.pop();
        }
    }
}
int main(){
    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);
    displayQueue(q);
    removeAtEven(q);
    displayQueue(q);
}
