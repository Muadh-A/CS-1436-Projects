//this program finds the hypotenuse of a triange with 2 sides given

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double firstSide, secondSide, Hypotenuse;
    cout << fixed;
    
    //Enter first side
    cout << setprecision(2) << "Enter first triangle side: ";
    cin >> firstSide;
    
    //Enter second side
    cout << setprecision(2) << "Enter second triangle side: ";
    cin >> secondSide;
    
    // Find Hypotenuse
    Hypotenuse = hypot(firstSide, secondSide);
    
    cout << setprecision(2) << "Hypotenuse: " << Hypotenuse << endl;
    
    return 0;
}
