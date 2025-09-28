#include<iostream>
using namespace std;
int main() {
    int row;
    cout << "Enter Row: ";
    cin >> row;
    int column;
    cout << "Enter Column: ";
    cin >> column;

    int arr[row][column];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Original matrix:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose:" << endl;
    for (int j = 0; j < column; j++) {
        for (int i = 0; i < row; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}