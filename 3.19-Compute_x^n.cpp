// 3.19 - Computation of x to the power of n

#include <iostream>

using namespace std;

int main(){
    
    int n, count;
    float x, result = 1.0;

    // Input base (x) and exponent (n)
    cout << "Enter base (x) and exponent (n): ";
    cin >> x >> n;

    // Compute x^n using a while loop
    count = 1;
    while (count <= n) {
        result *= x;
        count++;
    }

    // Output the result
    cout << "x = " << x << endl;
    cout << "n = " << n << endl;
    cout << "x to the power of n = " << result << endl;
    return 0;
}