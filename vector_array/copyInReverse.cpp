#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&V){
    for(int i=0;i< V.size()-1;i++){
        cout<<V[i];  
    }
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter Size";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    cout<<endl;
    cout<<"After Reversing"<<endl;
    int start=0;
    int end=v.size()-1;
    while(start<=end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    display(v);
    
}