// 3.9 - Largest of Three Numbers

#include <iostream>

using namespace std;

int main() {

    // Variable declarations
    int a, b, c;

    // Input three integers
    cout << "Enter three integer numbers: ";
    cin >> a >> b >> c;

    // Display the input values
    cout << "\na = " << a << "\nb = " << b << "\nc = " << c;

    // Determine the largest number
    if (a > b && a > c) {
        cout << "\n\na = " << a << " is the largest\n";
    } else if (b > c) {
        cout << "\n\nb = " << b << " is the largest\n";
    } else {
        cout << "\n\nc = " << c << " is the largest\n";
    }

    return 0;
}
