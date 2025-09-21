#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&V){
    for(int i=0;i< V.size();i++){
        cout<<V[i];  
    }
}
    void reversePart(vector<int>&V,int start,int end){
        while(start<=end){
            swap(V[start],V[end]);
            start++;
            end--;
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
    cout<<"After Reversing Part of Array"<<endl;
   reversePart(v,1,4);
   display(v);
  
}