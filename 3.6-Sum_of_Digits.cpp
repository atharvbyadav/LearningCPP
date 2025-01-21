// 3.6 - Sum of Digits

#include <iostream>

using namespace std;

int main() {

    // Variable declarations
    int digit1, digit2, digit3, digit4, digit5, sum, number, temp;

    // Input a 5-digit number
    cout << "Enter a 5-digit number: ";
    cin >> number;

    // Display the number
    cout << "\nNumber = " << number;

    // Extract digits from the number
    temp = number;
    digit1 = temp % 10;  // Extract last digit
    temp = temp / 10;
    digit2 = temp % 10;  // Extract fourth digit
    temp = temp / 10;
    digit3 = temp % 10;  // Extract third digit
    temp = temp / 10;
    digit4 = temp % 10;  // Extract second digit
    temp = temp / 10;
    digit5 = temp;       // Remaining digit (first digit)

    // Calculate the sum of digits
    sum = digit1 + digit2 + digit3 + digit4 + digit5;

    // Display the sum
    cout << "\nSum of digits = " << sum << endl;

    return 0;
}
