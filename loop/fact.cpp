#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;  // take input from user

    int product = 1;  // initialize with 1, not 0

    for (int i = 1; i <= n; i++) {
        product *= i;  // multiply step by step
    }

    cout << "Factorial of " << n << " is: " << product;
    return 0;
}
