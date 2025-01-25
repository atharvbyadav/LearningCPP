// 3.20 - Conversion of Binary number to Decimal number

#include <iostream>

using namespace std;

int main() {

    int binaryInput, binary, decimal = 0, digit, position = 0;

    // Prompt user for binary number input
    cout << "\nInput Binary Number: ";
    cin >> binaryInput;
    cout << "\n" << binaryInput;

    binary = binaryInput;

    // Convert binary to decimal
    while (binary) {
        digit = binary % 10; // Get the last digit
        decimal += digit << position; // Add the digit shifted by its position
        position += 1; // Move to the next position
        binary /= 10; // Remove the last digit
    }

    // Output the decimal equivalent
    cout << "\nDecimal Equivalent of binary num = " << decimal << endl;

    return 0;
}