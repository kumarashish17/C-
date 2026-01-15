#include<iostream>
#include<vector>
using namespace std;
void SortedSumPair(vector<int> &arr, int target){
    int left = 0;
    int right = arr.size() - 1;
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum ==  target){
            cout<<arr[left]<<" "<<arr[right]<<endl;
            left++;
            right--;
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
}
int main(){
    vector<int> arr;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int target;
    cin>>target;    
    SortedSumPair(arr, target);
    return 0;
}