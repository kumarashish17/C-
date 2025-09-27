#include<iostream>
using namespace std;
int main(){
int row;
cout<<"Enter Row";
cin>>row;
int column;
cout<<"column";
cin>>column;
int arr[row][column];
cin>>arr[row][column];
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        cin>>arr[row][column];
     }
  }
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        cout<<arr[i][j];

        cout<<"endl ";  
    }
}
for(int j=0;j<column;j++){
    for(int i=0;i<row;i++){
        cout<<arr[i][j];

        cout<<"endl ";  
    }
}
}