// 3.17 - To Count Negative, Positive and Zero

#include <iostream>

using namespace std;

int main()
{

    // Variable declarations
    int number, positive_count = 0, zero_count = 0, negative_count = 0, i = 1;

    cout << "Enter 10 integers:\n";

    // Using a do-while loop to process 10 inputs
    do {
        cin >> number;

        if (number > 0) {
            ++positive_count;
        } else if (number == 0) {
            ++zero_count;
        } else {
            ++negative_count;
        }

        i++;
    } while (i <= 10);

    // Display the results
    cout << "\nNumber of positive integers: " << positive_count;
    cout << "\nNumber of negative integers: " << negative_count;
    cout << "\nNumber of zero integers: " << zero_count << endl;

    return 0;
}
