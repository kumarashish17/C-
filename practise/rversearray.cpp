#include<iostream>
#include<vector>
using namespace std;
void reversed(vector<int>& arr){
    int start=0;
    int end=arr.size()-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed array: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
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
    reversed(arr);
}