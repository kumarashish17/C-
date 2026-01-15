#include<iostream>
#include<stack>
using namespace std;
 void print(stack<int> st){
    stack<int> temp;
    while(!st.empty()){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    //Restoring original stack
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtBottom(stack<int> &st, int data){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    st.push(data);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    //Push at bottom
    pushAtBottom(st, 5);
    print(st);
}