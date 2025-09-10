#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    bool flag=false;
    for(int i=2;i<n;i++){
        if(n%i==0){
        flag=true;
        break;
        }
    }
    if(n==1) cout<<"not prime nor composite";
    else if(flag==true) cout<<"composite number";
    else cout<<"prime number";
}