// 3.15 - Sum of Series

#include <iostream>

using namespace std;

int main() {

    int i, n, denominator;
    float x, sum, term;

    // Input values for x and n
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter number of terms (n): ";
    cin >> n;

    // Initialize sum and term
    sum = x;
    term = x;

    // Calculate the sum of the series
    for (i = 2; i <= n; ++i) {
        denominator = (2 * i - 2) * (2 * i - 1);
        term *= (-x * x) / denominator;
        sum += term;
    }

    // Output the result
    cout << "\nSum of the series = " << sum;
    cout << "\nValue of x = " << x;
    cout << "\nNumber of terms (n) = " << n << endl;

    return 0;
}
