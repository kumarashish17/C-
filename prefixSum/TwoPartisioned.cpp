#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    for(int i = 1; i < n; i++){
        arr[i] += arr[i - 1];
    }
    int totalSum = arr[n - 1];
    bool found = false;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] * 2 == totalSum){
            found = true;
            break;
        }
    }
    if(found){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
        }
}