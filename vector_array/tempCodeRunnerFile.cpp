#include<iostream>
#include<vector>
using namespace std;
vector<int>merge(vector<int>& v1,vector<int>&v2){
int n = v1.size();
int m = v2.size();
vector<int>v(n+m);
int i = 0;
int j = 0;
int k = 0;
while(i<=n-1 && j<=m-1){
    if(v1[i]<v2[j]){
        v[k]=v1[i];
        i++;
        
    }
    else{
        v[k]=v2[j];
        j++;
    }
    k++;
}
if(i==n){
    while(j<=m-1){
        v[k]=v2[j];
        j++;
        k++;
    }
}
if(i==m){
    while(i<=n-1){
        v[k]=v1[i];
        i++;
        k++;
    }
}
return v;
}
int main(){
vector<int>v1;
int n;
cout<<"enter size";
cin>>n;
for(int i = 1; i<n; i++){
    int x;
    cout<<"Enter the Elements";
    cin>>x;
    v1.push_back(x);
}
vector<int>v2;
int m;
cout<<"Enter the size of second Array";
cin>>m;
for(int i = 1; i<m; i++){
    int x;
    cout<<"Enetr the Elements";
    cin>>m;
    v2.push_back(x);
}
vector<int>v=merge(v1,v2);
for(int i = 0; i<v.size(); i++){
    cout<<v[i]<<" ";
}
}