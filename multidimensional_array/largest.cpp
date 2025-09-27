#include<iostream>
#include<limits.h>
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

    int largest = INT_MIN;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }