// 3.10 - Roots of a Quadratic Equation

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // Variable declarations
    float a, b, c, discriminant, x1, x2;

    // Input coefficients of the quadratic equation
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    // Display the coefficients
    cout << "\na = " << a << "\nb = " << b << "\nc = " << c;

    // Calculate the discriminant
    discriminant = b * b - 4.0 * a * c;

    // Check the nature of the roots based on the discriminant
    if (discriminant < 0) {
        cout << "\nComplex Conjugate Roots\n";
        float realPart = -b / (2.0 * a);
        float imaginaryPart = sqrt(-discriminant) / (2.0 * a);
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i\n";
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i\n";
    } else if (discriminant == 0) {
        x1 = -b / (2.0 * a);
        cout << "\nRepeated Roots\n";
        cout << "Root = " << x1 << endl;
    } else {
        float sqrtDiscriminant = sqrt(discriminant);
        x1 = (-b + sqrtDiscriminant) / (2.0 * a);
        x2 = (-b - sqrtDiscriminant) / (2.0 * a);
        cout << "\nReal Roots\n";
        cout << "Root 1 = " << x1 << "\nRoot 2 = " << x2 << endl;
    }

    return 0;
}
