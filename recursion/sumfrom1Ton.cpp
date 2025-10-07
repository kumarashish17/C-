#include<iostream>
using namespace std;
void summ(int sum,int n){
    if(n==0){
    cout<<sum<<endl;
    return;
    }
    summ(sum+n,n-1);
}
int main(){
    summ(0,10);
}