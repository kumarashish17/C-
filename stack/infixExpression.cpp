#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s = "2+6*4/8-3";
    stack<int> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        if(s[i]>'0' && s[i]<='9'){
            val.push(s[i]-'0');
        }
        else{
            
        }
    }
}
