#include<iostream>
#include<vector>
using namespace std;
void removeDuplicates(vector<int>& arr){
    
}
int main(){
    vector<int>arr;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    removeDuplicates(arr);
}