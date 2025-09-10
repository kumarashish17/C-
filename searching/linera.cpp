#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter target";
    cin>>target;
    bool flag=false;
    for(int i=0;i<n;i++){
    if(arr[i]==true){
    flag=true;
    break;
    }

    }
    if(flag==true) cout<<"element is present";
    else cout<<"element is not present";
}