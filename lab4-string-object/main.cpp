//This program will give you middle character and more
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string firstWord, secondWord, stringOneTwo, stringTwoOne;
    
    //input first word
    cout << "Please enter a word or phrase." << endl;
    getline(cin, firstWord);
    
    //input second word
    cout << "Enter a second word or phrase." << secondWord << endl;
    getline(cin, secondWord);
    cout << endl;
    
    //concatenated
    stringOneTwo = (firstWord + secondWord);
    stringTwoOne = (secondWord + firstWord);
    
    //How long concatenated
    int len = stringOneTwo.length();
    int len1 = stringTwoOne.length();
    
    //Divide by 2
    int MI = (len) / 2;
    int MI2 = (len1) / 2;

    cout << "The first character of " << "\"" << firstWord << "\"" 
         << " is: " << firstWord[0] << endl;
         
    cout << "The first character of " << "\"" << secondWord << "\"" <<
         " is: "<< secondWord[0] << endl << endl;
    
    
    cout << "The second string concatenated after the " 
         << "last character of the first string is: " << endl
         << "\t" << stringOneTwo << endl
         << "\t" << "The middle character of this string is: "
         << stringOneTwo[MI]
         << endl;
    
    cout << "The first string concatenated after the " 
         << "last character of second string is: " << endl
         << "\t" << stringTwoOne << endl << "\t" 
         << "The middle character of this string is: "
         << stringTwoOne[MI2]
         << endl;
    
    return 0;
}