// 3.7 - Gross Salary Computation

#include <iostream>

using namespace std;

int main() {

    // Variable declarations
    int basicSalary;
    float da, hra, grossSalary;

    // Input basic salary
    cout << "Enter the basic salary: ";
    cin >> basicSalary;

    // Calculate DA (Dearness Allowance) and HRA (House Rent Allowance)
    da = 0.4 * basicSalary;   // 40% of basic salary
    hra = 0.2 * basicSalary;  // 20% of basic salary

    // Calculate gross salary
    grossSalary = basicSalary + da + hra;

    // Display the results
    cout << "\nDearness Allowance (DA) = " << da;
    cout << "\nHouse Rent Allowance (HRA) = " << hra;
    cout << "\nGross Salary = " << grossSalary << endl;

    return 0;
}
