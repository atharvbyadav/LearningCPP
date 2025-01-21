// 3.4 - Area and Perimeter of Rectangle

#include <iostream>

using namespace std;

int main() {

    // Variable declarations
    int length, width, area, perimeter;

    // Initialize dimensions of the rectangle
    length = 4;  // Length of the rectangle
    width = 6;   // Width of the rectangle

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Display the results
    cout << "\nArea = " << area;
    cout << "\nPerimeter = " << perimeter << endl;

    return 0;
}
