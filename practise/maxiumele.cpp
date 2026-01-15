#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void fmax(vector<int>& arr){
    if(arr.empty()){
        cout<<"Array is empty."<<endl;
        return;
    }
    int maxium=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>maxium){
            maxium=arr[i];
        }
    }
    cout<<"Maximum element is: "<<maxium<<endl;
}
int main(){
    vector<int>arr;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cout<<"Enter element "<<i+1<<": ";
        cin>>element;
        arr.push_back(element);
    }
    fmax(arr);
}