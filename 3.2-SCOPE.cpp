// 3.2 :: Scope Resolution Operator

#include <iostream>

using namespace std;

// Global variable
int a = 10;

int main() {

    // Local variable
    int a = 15;

    // Display local and global variables
    cout << "\nLocal a = " << a << ", Global a = " << ::a;

    // Modify the global variable using scope resolution operator
    ::a = 20;

    // Display updated global variable and unchanged local variable
    cout << "\nLocal a = " << a << ", Global a = " << ::a << endl;

    return 0;
}
