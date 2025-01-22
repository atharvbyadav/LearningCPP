// 3.8 - Computation of Distance, Time, and Height

#include <iostream>
#include <cmath>

#define G 9.8                       // Acceleration due to gravity (m/s^2)
#define PI 3.14159265               // Value of PI
#define RADIANS_PER_DEGREE (PI/180) // Conversion factor from degrees to radians

using namespace std;

int main() {

    float velocity, theta;

    // Input velocity and angle in degrees
    cout << "Enter the velocity (m/s) and angle (degrees): ";
    cin >> velocity >> theta;

    // Convert angle to radians
    theta *= RADIANS_PER_DEGREE;

    // Compute distance, time, and height
    float distance = (velocity * velocity * sin(2 * theta)) / G;
    float time = (2 * velocity * sin(theta)) / G;
    float height = (velocity * velocity * sin(theta) * sin(theta)) / (2 * G);

    // Display the results
    cout << "\nDistance (m) = " << distance;
    cout << "\nTime (s) = " << time;
    cout << "\nMaximum Height (m) = " << height << endl;

    return 0;
}
