// Each column of the table will be ten characters wide and be separated 
// by one | character. The titles and values will be right-justified in the columns. 
//Round the cosine, sine, and 
//tangent to exactly four digits to the right of the decimal point. 

#include <iostream> 
#include <cmath> 
#include <iomanip> 
#include <string> 
using namespace std; 


//arccosine of -1 
//radian = degree x (pi/180) 
// SOH CAH TOA 

int main() 
{ 
    double cosine, sine, tangent, degrees, radians; 
    //Get PI const double
    const double PI = acos(-1);
    
    cout << "Enter an angle in degrees (between 0 and 90): ";
    cin >> degrees; 

    //radians conversion 
    radians = degrees * (PI / 180);

    //Trig Functions 
    sine = sin(radians); 
    cosine = cos(radians); 
    tangent = tan(radians);
    
    cout << setw(10) << "Angle" << "|" 
         << setw(10) << "Angle" << "|" << endl;
         
    cout << setw(10) << "Degrees" << "|" 
         << setw(10) << "Radians" << "|" 
         << setw(10) << "Cosine" << "|" 
         << setw(10) << "Sine" << "|" 
         << setw(10) << "Tangent" << endl;
         
    cout << setw(10) << setprecision(4) << degrees << "|"
         << setw(10) << radians << "|";
         
    cout << fixed << setprecision(4)
         << setw(10) << right << cosine << "|"
         << setw(10) << right << sine << "|"
         << setw(10) << right << tangent << endl;

         return 0; 
}




    // cout << setw(10) << degrees << "|" 
    //      << setw(10) << radians << "|"  
    //      << setw(10) << setprecision(4) << cosine << "|" 
    //      << setw(10) << setprecision(4) << sine << "|" 
    //      << setw(10) << setprecision(4) << tangent; 
    
        // cout << setw(10) << setprecision(4) << degrees << "|"
    //      << setw(10) << radians << "|";
         
    // cout << fixed << setprecision(4)
    //      << setw(10) << cosine << "|"
    //      << setw(10) << sine << "|"
    //      << setw(10) << tangent << endl;
         