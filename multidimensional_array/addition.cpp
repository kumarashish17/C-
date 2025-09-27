#include<iostream>
using namespace std;

int main() {
    int row, column;
    cout << "Enter Row: ";
    cin >> row;
    cout << "Enter Column: ";
    cin >> column;

    int arr[row][column];
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }

    int row2, column2;
    cout << "Enter Row2: ";
    cin >> row2;
    cout << "Enter Column2: ";
    cin >> column2;

    if (row != row2 || column != column2) {
        cout << "Matrix dimensions must be the same for addition." << endl;
        return 1;
    }

    int brr[row2][column2];
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            cin >> brr[i][j];
        }
    }

    int result[row][column];
    cout << "Resultant matrix after addition:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            result[i][j] = arr[i][j] + brr[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}