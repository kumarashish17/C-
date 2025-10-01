#include<iostream>
using namespace std;
int main(){
    int row, column;
    cout << "Enter Row: ";      
    cin >> row;
    cout << "Enter Column: ";
    cin >> column;
    int arr[row][column];
    cout << "Enter elements:" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cin >> arr[i][j];
        }
    }

}