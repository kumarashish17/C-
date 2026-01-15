#include<iostream>
#include<vector>
using namespace std;
int main(){
int row1, col1;
cout << "Enter number of rows and columns for first matrix: ";
cin >> row1 >> col1;
int matrix1[row1][col1];
cout << "Enter elements of first matrix:" << endl;
for(int i = 0; i<row1; i++){
    for(int j = 0; j<col1; j++){
        cin >> matrix1[i][j];
    }
}
int row2, col2;
cout << "Enter number of rows and columns for second matrix: ";
cin >> row2 >> col2;
if(row1 != row2 || col1 != col2){
    cout<<"Matrices cannot be added due to dimension mismatch."<<endl;
    return 0;
}
int matrix2[row2][col2];
cout << "Enter elements of second matrix:" << endl;
for(int i = 0; i<row2; i++){
    for(int j = 0; j<col2; j++){
        cin >> matrix2[i][j];
    }

}
for(int i = 0; i<row1; i++){
    for(int j = 0; j<col1; j++){
        cout << matrix1[i][j] + matrix2[i][j] << " ";
    }
    cout << endl;
}
}