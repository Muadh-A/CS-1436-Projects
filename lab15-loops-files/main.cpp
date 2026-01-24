#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Stores the name of the output file entered by the user
    string fileName;

    // Stores each word or phrase entered by the user
    string phrase;

    // Output file stream object
    ofstream outFile;

    // Prompt user for output file name
    cout << "Enter the name of the output file." << endl;
    getline(cin, fileName);

    // Attempt to open the output file
    outFile.open(fileName);

    // Check if the file failed to open
    if (!outFile.is_open()) {
        cout << endl;
        cout << "Error, unable to open the output file." << endl;
        return 0;
    }

    // Prompt user for first word or phrase
    cout << endl;
    cout << "Enter a word or phrase [enter 123 to end input]." << endl;
    getline(cin, phrase);

    // Loop until the user enters "123"
    while (phrase != "123") {

        // Loop through each character in the phrase
        int i = 0;
        while (i < phrase.length()) {

            // Write the ASCII value of each character to the file
            outFile << static_cast<int>(phrase[i]) << " ";
            i = i + 1;
        }

        // Move to the next line in the output file
        outFile << endl;

        // Prompt user for another word or phrase
        cout << "Enter another word or phrase [enter 123 to end input]." << endl;
        getline(cin, phrase);
    }

    // Close the output file
    outFile.close();

    return 0;
}
