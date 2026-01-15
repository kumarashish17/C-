#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> &st){
    if(st.size() == 0){
        return;
    }
    int x = st.top();
    st.pop();
    display(st);
    st.push(x);
    cout<<x<<endl;
}
void pushAtBottom(stack<int> &st, int data){
    if(st.size() == 0){
        st.push(data);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottom(st, data);
    st.push(x);
}
void displayReverse(stack<int> &st){
    if(st.size() == 0){
        return;
    }
    int x = st.top();
    st.pop();
    cout<<x<<endl;
    displayReverse(st);
    st.push(x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    display(st);
    cout<<"After reverse display"<<endl;
    displayReverse(st);
}