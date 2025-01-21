// 3.3 Calculation of Simple Interest

#include <iostream>

using namespace std;

int main() {

    // Variable declarations
    int principal, years;
    float rate, simpleInterest;

    // Initialize values
    principal = 1000; // Principal amount
    years = 3;        // Time in years
    rate = 8.5;       // Rate of interest

    // Calculate simple interest
    simpleInterest = (principal * years * rate) / 100;

    // Display the result
    cout << "Simple Interest = " << simpleInterest << endl;

    return 0;
}
