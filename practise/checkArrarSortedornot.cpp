#include <iostream>
#include <vector>
using namespace std;

void sorted(vector<int>& arr) {
    bool isSorted = true;

    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
        cout << "Array is sorted" << endl;
    else
        cout << "Array is NOT sorted" << endl;
}

int main() {
    vector<int> arr;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    sorted(arr);
    return 0;
}
