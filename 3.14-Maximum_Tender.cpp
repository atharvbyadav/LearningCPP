// 3.14 - Maximum Tender

#include <iostream>

using namespace std;

int main() {

    // Variable declarations
    int tender_id, max_id, n, i;
    float tender_amt, max_tender = 0;

    // Ask user for number of tenders
    cout << "Enter number of tenders: ";
    cin >> n;

    // Loop to input tender details and find the maximum tender
    for (i = 1; i <= n; i++) {
        // Input tender id and amount
        cout << "Enter tender ID and amount: ";
        cin >> tender_id >> tender_amt;

        // Check if current tender is the maximum
        if (tender_amt > max_tender) {
            max_tender = tender_amt;
            max_id = tender_id;
        }
    }

    // Output the tender with the maximum amount
    cout << "\nMaximum Tender ID: " << max_id;
    cout << "\nMaximum Amount: Rs. " << max_tender << endl;

    return 0;
}
