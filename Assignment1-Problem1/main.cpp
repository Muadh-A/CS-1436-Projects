// This program asks the user for two whole numbers
// and performs integer division on them.

#include <iostream>   // Allows input and output (cin, cout)
#include <string>     // Included for string usage (not required here)

using namespace std;  // Allows us to use standard names without std::

int main()
{
    int num1, num2, num3; 
    // num1 = dividend
    // num2 = divisor
    // num3 = result of the division

    // Prompt the user to enter the dividend
    cout << "Enter a whole number that is the dividend: ";
    cin >> num1;

    // Prompt the user to enter the divisor
    cout << "Enter a whole number that is the divisor: ";
    cin >> num2;

    // Display what operation will be performed
    cout << endl << "We will divide " << num1 << " by " << num2 << endl << endl;

    // Perform integer division
    num3 = (num1 / num2);

    // Display the result of the integer division
    cout << "The quotient of the integer division is: " << num3 << endl;

    // Placeholder for double division output (not yet implemented)
    cout << "The quotient of the double division is: " << endl;

    return 0; // End of program
}
