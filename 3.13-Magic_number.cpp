// 3.13 - Magic Number

#include <iostream>
#include <cstdlib> // For rand()

using namespace std;

int main() {

    // Variable declarations
    int magic, guess;

    // Generate a random number
    magic = rand();

    // Ask the user to guess the number
    cout << "Guess the Magic Number: ";
    cin >> guess;

    // Check the user's guess
    if (guess == magic) {
        cout << "\n**** CORRECT! ****";
    } else {
        cout << "\n**** WRONG! ****";
    }

    return 0;
}
