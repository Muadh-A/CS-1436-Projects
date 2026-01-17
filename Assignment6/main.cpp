//This program creates a file containing the Morse code equivalent of
// an input file and then displays number of lines
//translated.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//loads codes for letters a–z from file and returns true if 26 codes
//are successful
bool loadMorseArray(string morseArray[], ifstream& morseFile) {
    string letter;
    string code;
    int count = 0;

    while (morseFile >> letter >> code && count < 26) {
        morseArray[count] = code;
        count++;
    }

    return (count == 26);
}

//converts one line of text into morse code then put its into the
//output specified file
void genMorse(string& morseLine, const string textLine, const string morseArray[]) {
    morseLine.clear();

    for (char ch : textLine) {
        if (ch >= 'A' && ch <= 'Z') {
            morseLine += morseArray[ch - 'A'];
            morseLine += ' ';
        }
        else if (ch >= 'a' && ch <= 'z') {
            morseLine += morseArray[ch - 'a'];
            morseLine += ' ';
        }
        else if (ch == ' ' || ch == '.') {
            morseLine += ch;
        }
    }
}

int main() {
    string inputFileName;
    string outputFileName;

    cout << "Enter the name of the input file: ";
    cin >> inputFileName;

    cout << "Enter the name of the output file: ";
    cin >> outputFileName;

    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);
    ifstream morseFile("morseLetters.txt");

    bool filesOpen =
        inputFile.is_open() && outputFile.is_open() && morseFile.is_open();

    if (!filesOpen) {
        if (!inputFile.is_open())
            cout << "Error, unable to open file " << inputFileName <<
             "." << endl;
        else if (!outputFile.is_open())
            cout << "Error, unable to open file " << outputFileName <<
             "." << endl;
        else
            cout << "Error, unable to open file morseLetters.txt." << endl;
    } else {

       //counts and tells you how many lines the program translated
        string morseArray[26];
        bool loads = loadMorseArray(morseArray, morseFile);

        if (loads) {
            string textLine;
            string morseLine;
            int lineCount = 0;

            while (getline(inputFile, textLine)) {
                genMorse(morseLine, textLine, morseArray);
                outputFile << morseLine << endl;
                lineCount++;
            }

            if (lineCount > 0) {
                cout << "Translation complete. "
                     << lineCount
                     << " lines translated."
                     << endl;
            }
        }
    }
    return 0;
}
