#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int reverse = 0;

    while(n > 0) {
        int ld = n % 10;     // get last digit
        reverse = reverse * 10 + ld;  // append digit to reverse
        n /= 10;             // reduce n
    }

    cout << "Reversed number: " << reverse << endl;
    return 0;
}
