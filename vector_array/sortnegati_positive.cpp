#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
void sort(vector<int>&v){
int i = 0;
int j = v.size()-1;
while(i<j){
    if(v[i]<0 && v[j]>0){
        swap(v[i],v[j]);
        i++;
        j--;
    } 
    if(v[i]>0) i++;
    if(v[j]<0) j--;
}

}
int main(){
    vector<int>v;
    int n;
    cout<<"enter size";
    cin>>n;
    for(int i=0;i<n;i++){
        int x ;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    sort(v);
    display(v);
}