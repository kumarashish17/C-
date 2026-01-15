#include <iostream>
using namespace std;

int main() {
    int row1, col1;
    cout << "Enter number of rows and columns for the matrix: ";
    cin >> row1 >> col1;

    int matrix1[row1][col1];

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Declare transpose matrix
    int transposed[col1][row1];

    // Compute transpose
    for (int i = 0; i < col1; i++) {
        for (int j = 0; j < row1; j++) {
            transposed[i][j] = matrix1[j][i];
        }
    }

    // Print result
    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < col1; i++) {
        for (int j = 0; j < row1; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
