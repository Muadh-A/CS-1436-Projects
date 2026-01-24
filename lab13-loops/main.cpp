#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double Fahrenheit, Celsius;
    
    cout << fixed << showpoint << setprecision(1);
    
    cout << "Enter a Fahrenheit temperature of 120 or lower: ";
    cin >> Fahrenheit;
    
    if (Fahrenheit > 120) {
        return 0;
    }
    
    cout << endl;
    
    Celsius = (5.0/9.0) * (Fahrenheit - 32.0);
    

    cout << setw(10) << right << "|Fahrenheit|" 
         << setw(8) << right << " Celsius|" << endl;
         
    do {
        
        Celsius = (5.0/9.0) * (Fahrenheit - 32.0);
        
        cout << right << "|" << setw(10) << Fahrenheit << "|"
             << right << setw(8) << Celsius << "|" << endl;
        Fahrenheit += 4;
        
    }
    while (Fahrenheit <= 120);

    cout << endl;
    return 0;
}