#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows";
    cin>>n;
    int ay=1;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ay<<" ";
            ay=1-ay;
        }
        cout<<endl;
    }
}