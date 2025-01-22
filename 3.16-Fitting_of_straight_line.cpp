// 3.16 - Fitting of straight line

#include <iostream>

using namespace std;

int main()
{

    // Variable declarations
    float sum_x = 0, sum_y = 0, sum_xy = 0, sum_xsq = 0, x, y, numerator, denominator, m, c;
    int n;

    // Input the number of data points
    cout << "Enter the number of data points: ";
    cin >> n;

    // Input data points
    cout << "Enter the data points (x and y):\n";
    for (int i = 1; i <= n; ++i) {
        cin >> x >> y;
        sum_x += x;
        sum_y += y;
        sum_xy += x * y;
        sum_xsq += x * x;
    }

    // Calculate slope (m) and intercept (c)
    numerator = n * sum_xy - sum_x * sum_y;
    denominator = n * sum_xsq - sum_x * sum_x;

    // If Denominator is zero display error
    if (denominator == 0) {
        cout << "\nError: Denominator is zero. Cannot compute slope and intercept.\n";
        return 1;
    }

    m = numerator / denominator;
    c = (sum_y - m * sum_x) / n;

    // Display the results
    cout << "\nSlope (m): " << m;
    cout << "\nIntercept (c): " << c << endl;

    return 0;
}
