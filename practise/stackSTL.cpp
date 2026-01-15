#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    //Traversal
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