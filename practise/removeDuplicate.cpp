#include<iostream>
#include<vector>
using namespace std;
void RemoveDuplicates(vector<int> &arr){
    if(arr.size() == 0){
        return;
    }
    int idx = 1;
    for(int i = 1; i< arr.size(); i++){
        if(arr[i] != arr[i-1]){
            arr[idx] = arr[i];
            idx++;
        }
    }
}
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    RemoveDuplicates(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}