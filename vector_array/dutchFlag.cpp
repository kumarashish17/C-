#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
for(int i = 0; i<v.size(); i++){
    cout<<v[i]<<" ";
}
}
void dutch(vector<int>&v){
    int lo = 0;
    int mid = 0;
    int hi = v.size()-1;
    while(mid<=hi){
        if(v[mid]==2) {
         swap(v[mid],v[hi]);
         hi--;
        }
    else if(v[mid]==0){
        swap(v[lo],v[mid]);
        lo++;
        mid++;
    }
    else{
        mid++;
    }
    }
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size";
    cin>>n;
    for(int i = 0; i<n; i++){
        int x;
        cout<<"Enter Element";
        cin>>x;
        v.push_back(x);
    }
    display(v);
    dutch(v);
    cout<<endl;
    display(v);
}