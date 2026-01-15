#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter charater";
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        cout<<"alphabet";
    }
    else{
        cout<<"not alphabet";
    }
}