#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &result){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            result[k]=a[i];
            i++;
            k++;
        }
        else{
            result[k]=b[j];
            j++;
            k++;
        }
    }

    if(i==a.size()){
        while(j<b.size()){
            result[k]=b[j];
            j++;
            k++;
        }
    }

    if(j==b.size()){
        while(i<a.size()){
            result[k]=a[i];
            i++;
            k++;
        }
    }
}

void mergerSort(vector<int>&arr){
    if(arr.size()==1){
        return;
    }
    int n1=arr.size()/2;
    int n2=arr.size()-n1;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i=0;i<n1;i++){
        a[i]=arr[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[n1+i];
    }
    mergerSort(a);
    mergerSort(b);
    merge(a,b,arr);
    a.clear();
    b.clear();
}

int main(){
    vector<int> arr ;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    mergerSort(arr);


    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
