#include<iostream>
using namespace std;
int stair(int n){
if(n==2) return 2;
if(n==1) return 1;
return stair(n-1)+stair(n-2);
}
int main(){
int n;
cout<<"n degerini giriniz:";
cin>>n;
cout<<stair(n);
return 0;
}