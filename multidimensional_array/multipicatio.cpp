#include <iostream>
using namespace std;

int main() {
    int row1, col1;
    cout << "Enter rows1 and columns1: ";
    cin >> row1 >> col1;

    int row2, col2;
    cout << "Enter rows2 and columns2: ";
    cin >> row2 >> col2;

    if (col1 == row2) { 
        int arr1[row1][col1];
        cout << "Enter first array elements:\n";
        for (int i = 0; i < row1; i++)
            for (int j = 0; j < col1; j++)
                cin >> arr1[i][j];

        int arr2[row2][col2];
        cout << "Enter second array elements:\n";
        for (int i = 0; i < row2; i++)
            for (int j = 0; j < col2; j++)
                cin >> arr2[i][j];

        int result[row1][col2];

        
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                result[i][j] = 0;
                for (int k = 0; k < col1; k++) {
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        
        cout << "Resultant Matrix:\n";
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++)
                cout << result[i][j] << " ";
            cout << endl;
        }
    }
    else {
        cout << "Matrix multiplication not possible!";
    }

    return 0;
}
