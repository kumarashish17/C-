#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Stack{
public:    
    vector<int>v;
    Stack(){

    }
void push(int val){
    v.push_back(val);
}
void pop(){
    if(v.size()==0){
        cout<<"Stack underflow"<<endl;
        return;
    }
    v.pop_back();
}
int top(){
    if(v.size()==0){
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    return v[v.size()-1];
}
};
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    return 0;
}