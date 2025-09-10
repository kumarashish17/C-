#include<iostream>
using namespace std;
int main(){
    int cp;
    int sp;
    cout<<"enter";
    cin>>cp;
    cin>>sp;
    if(sp>cp){
        cout<<"profit";
    }
    else if(cp==sp){
        cout<<"no profit no loss";
    }
    else{
        cout<<"loss";
    }
}