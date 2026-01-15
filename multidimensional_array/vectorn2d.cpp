#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> row1;
    int n;
    cout << "Enter number of elements in the row: ";
    cin >> n;
    for(int  i = 0; i< n; i++){
        int element;
        cin >> element;
        row1.push_back(element);
    }
    vector<int> row2;;
    cout << "Enter number of elements in the row: ";
    cin >> n;
    for(int  i = 0; i< n; i++){
        int element;
        cin >> element;
        row2.push_back(element);
    }
    vector<vector<int>> matrix;
    matrix.push_back(row1);
    matrix.push_back(row2);
    cout << "The matrix is:\n";
    for(int i = 0; i< matrix.size(); i++){
        for(int j = 0; j< matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}