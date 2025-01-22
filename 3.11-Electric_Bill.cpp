// 3.11 - Electric Bill Calculation

#include <iostream>

using namespace std;

int main() {

    // Variable declarations
    int units, custnum;
    float charges = 0.0;

    // Input customer number and units consumed
    cout << "Enter customer number: ";
    cin >> custnum;
    cout << "Enter units consumed: ";
    cin >> units;

    // Calculate charges based on units consumed
    if (units <= 30) {
        charges = 0.75 * units;
    } else if (units <= 100) {
        charges = (0.75 * 30) + (2.50 * (units - 30));
    } else if (units <= 300) {
        charges = (0.75 * 30) + (2.50 * 70) + (3.00 * (units - 100));
    } else {
        charges = (0.75 * 30) + (2.50 * 70) + (3.00 * 200) + (4.60 * (units - 300));
    }

    // Display customer details and charges
    cout << "\nCustomer Number: " << custnum;
    cout << "\nUnits Consumed: " << units;
    cout << "\nTotal Charges: Rs. " << charges << endl;

    return 0;
}
