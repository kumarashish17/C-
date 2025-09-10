#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter exponent: ";
    cin >> b;

    bool flag = true;
    if (b < 0) {
        flag = false;
        b = -b;
    }

    long long pow = 1;  // use long long to avoid overflow for large powers
    for (int i = 1; i <= b; i++) {
        pow = pow * a;
    }

    if (flag) {
        cout << a << " raised to the power " << b << " is " << pow << endl;
    } else {
        cout << a << " raised to the power -" << b << " is " << 1.0 / pow << endl;
    }

    return 0;
}
