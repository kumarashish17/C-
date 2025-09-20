#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter Size";
    cin>>n;
    int x;
    cout<<"Enter Elements";
    cin>>x;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=v.size()-1;i>1;i--){
        if(v[i]==x){
            cout<<i;
            break;
        }
    }
}