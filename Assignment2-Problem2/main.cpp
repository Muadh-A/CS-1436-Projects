//Program will get the user's first and last initials, and their ASCII Values
//Program will then add 1 to the two ASCII encodings and 
//display the new values along with their equivalent characters.

#include <iostream>
using namespace std;

int main() 
{
    int value, value1, valueAndOne, value1AndOne;
    char firstInitial, secondInitial, firstInitial1, secondInitial1;

    //First Initial
    cout << "Enter your first initial: ";
    cin >> firstInitial;
    value = static_cast<int>(firstInitial);
    valueAndOne = (value + 1);
    firstInitial1 = static_cast<char>(valueAndOne);
    
    
    //Last Initial
    cout << "Enter your last initial: ";
    cin >> secondInitial;
    value1 = static_cast<int>(secondInitial);
    value1AndOne = (value1 + 1);
    secondInitial1 = static_cast<char>(value1AndOne);
    
    
    //First initial and ascii
    cout << endl << firstInitial 
         << " has code " << value << endl;
   
   //First initial + 1 and ascii
    cout << value << " plus one is " 
         <<  valueAndOne << " which is the character " 
         << firstInitial1 << endl << endl;
    
    //Output second initial and ascii
    cout << secondInitial << " has code "
         << value1 << endl;
    
    //Second initial + 1 and ascii
    cout << value1 << " plus one is " << value1AndOne 
         << " which is the character " << secondInitial1 << endl;
    
    return 0;
    
}