//This is a program that converts a time entered by the user in seconds to 
//hours, minutes, and seconds and displays both the input time and the converted time.
#include <iostream>
using namespace std;

int main() 
{
    int secondsInput, num1, num1Rem, num2, num2Rem, num3;
    const int SEC_PER_MIN = 60;
    const int HOURS_PER_MIN = (60 * SEC_PER_MIN); 
    
    cout << "This program converts a time entered in seconds to hours, minutes, and seconds." << "\n";
    cout << "Please enter a time in seconds: ";
    cin >> secondsInput;
    cout << secondsInput << " seconds is:" << "\n";
    
    //Dividing for hours
    num1 = (secondsInput / HOURS_PER_MIN);
    num1Rem = (secondsInput % HOURS_PER_MIN);
    
    //Dividing for minutes
    num2 = (num1Rem / SEC_PER_MIN);
    num2Rem = (num1Rem % SEC_PER_MIN);
    
    //Finding seconds
    num3 = num2Rem;
    
    //Display output
    cout << "\t" << num1 << " hours" << "\n";
    cout << "\t" << num2 << " minutes" << "\n";
    cout << "\t" << num3 << " seconds" << "\n";
    
    return 0;
}