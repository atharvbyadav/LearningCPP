// 3.1 AVERAGE OF THREE NUMBERS

#include <iostream>

using namespace std;

int main() {

    int m1, m2, m3;
    float avg;

    // Prompt user for input
    cout << "Enter 3 numbers: ";
    cin >> m1 >> m2 >> m3;

    // Calculate the average
    avg = (m1 + m2 + m3) / 3;

    // Display the result
    cout << "\nAverage = " << avg << endl;

    return 0;
}
