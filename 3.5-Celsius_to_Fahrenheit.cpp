// 3.5 - Celsius to Fahrenheit Conversion

#include <iostream>

using namespace std;

int main() {

    // Variable declarations
    float fahrenheit, celsius;

    // Prompt user for input
    cout << "\nEnter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = 1.8 * celsius + 32.0;

    // Display the result
    cout << "\nTemperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
