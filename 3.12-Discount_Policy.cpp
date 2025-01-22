// 3.12 - Discount Policy

#include <iostream>

using namespace std;

int main() {

    // Variable declarations
    int srno, code;
    float amt, discount = 0.0, net_amt;

    // Input serial number, code, and amount
    cout << "Enter Sr.No.: ";
    cin >> srno;
    cout << "Enter Code: ";
    cin >> code;
    cout << "Enter Amount: ";
    cin >> amt;

    // Determine discount based on code and amount
    switch (code) {
        case 1:
            if (amt >= 50000) {
                discount = 0.2 * amt;
            } else {
                discount = 0.0;  // No discount if conditions are not met
            }
            break;

        case 2:
            if (amt >= 20000) {
                discount = 0.15 * amt;
            } else {
                discount = 0.0;
            }
            break;

        case 3:
            if (amt >= 10000) {
                discount = 0.1 * amt;
            } else {
                discount = 0.0;
            }
            break;

        default:
            cout << "Invalid Code! No discount applicable.\n";
            discount = 0.0;
            break;
    }

    // Calculate net amount
    net_amt = amt - discount;

    // Output the discount and net amount
    cout << "\nSr.No.: " << srno;
    cout << "\nCode: " << code;
    cout << "\nAmount: Rs. " << amt;
    cout << "\nDiscount: Rs. " << discount;
    cout << "\nNet Amount: Rs. " << net_amt << endl;

    return 0;
}
