#include <iostream>
using namespace std;

int main() {
    int row1, column1, row2, column2;
    cout << "Enter Row and Column for first matrix: ";
    cin >> row1 >> column1; 
    cout << "Enter Row and Column for second matrix: ";
    cin >> row2 >> column2;         

    if (column1 == row2) {
        int arr1[50][50], arr2[50][50], result[50][50];  // use fixed size for safety

        cout << "Enter elements of first matrix:" << endl;
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column1; j++) {
                cin >> arr1[i][j];
            }
        }

        cout << "Enter elements of second matrix:" << endl;
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < column2; j++) {
                cin >> arr2[i][j];
            }
        }

        // Matrix multiplication
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column2; j++) {
                result[i][j] = 0;
                for (int k = 0; k < column1; k++) {
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        // Print result
        cout << "Resultant Matrix:" << endl;
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column2; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Matrix multiplication not possible" << endl;
    }

    return 0;
}
