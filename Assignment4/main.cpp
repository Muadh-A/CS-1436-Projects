// This is a program that helps calculate the tip amount and total of a salesAmount
// Works like a Calculator

#include <iostream>
#include <iomanip>
using namespace std;

// Gets tip amount
double calcTipAmt(double salesAmount, double tipPercent);

// Displays menu 
char getMenuItem(double salesAmount);

// Returns total amount
double calcTotalSale(double salesAmount, double tipAmt);

// DIsplays results
void displayResults(double salesAmount, double tipAmt, double totalSale);


int main() {
    
    // Declaring variables in main
    double salesAmount = 0.0, tipAmt = 0.0, tipPercent = 0.0, customTipAmt = 0.0, totalSale = 0.0;
    char menuChoice;
    bool validData = true;

    // Input
    cout << "Enter the amount of the sale: ";
    cin >> salesAmount;
    cout << endl;

    // If invalid
    if (salesAmount <= 0) {
        cout << "\nError, invalid sales amount entered.";
        validData = false;
    }
    
    // If valid
    if (validData) {
        menuChoice = getMenuItem(salesAmount);

        if (menuChoice == 'T' || menuChoice == 't') {
            tipAmt = calcTipAmt(salesAmount, 10);
        }

        else if (menuChoice == 'F' || menuChoice == 'f') {
            tipAmt = calcTipAmt(salesAmount, 15);
        }

        else if (menuChoice == 'W' || menuChoice == 'w') {
            tipAmt = calcTipAmt(salesAmount, 20);
        }

        else if (menuChoice == 'P' || menuChoice == 'p') {
            cout << "Enter custom tip percentage: ";
            cin >> tipPercent;

            if (tipPercent < 0) {
                cout << "\nError, invalid percentage entered.";
                validData = false;
            }
            else {
                tipAmt = calcTipAmt(salesAmount, tipPercent);
            }
        }

        else if (menuChoice == 'A' || menuChoice == 'a') {
            cout << "Enter custom tip amount: ";
            cin >> customTipAmt;

            if (customTipAmt < 0) {
                cout << "\nError, invalid tip amount entered.";
                validData = false;
            }
            else {
                tipAmt = customTipAmt;
            }
        }

        else {
            cout << "\nError, invalid menu choice entered.";
            validData = false;
        }
    }

    if (validData) {
        totalSale = calcTotalSale(salesAmount, tipAmt);
        displayResults(salesAmount, tipAmt, totalSale);
    }

    return 0;
}

// Fucntion definitions below

double calcTipAmt(double salesAmount, double tipPercent) {
    double tipAmt = 0.0;
    tipAmt = salesAmount * (tipPercent / 100.0);
    return tipAmt;
}

char getMenuItem(double salesAmount) {
    double tip10 = calcTipAmt(salesAmount, 10);
    double tip15 = calcTipAmt(salesAmount, 15);
    double tip20 = calcTipAmt(salesAmount, 20);
    char choice;

    cout << fixed << setprecision(2);
    cout << "\n\t\t\tTip Calculator\n\n";
    cout << "\tT - 10 percent tip of $" << tip10 << endl;
    cout << "\tF - 15 percent tip of $" << tip15 << endl;
    cout << "\tW - 20 percent tip of $" << tip20 << endl;
    cout << "\tP - Custom tip percentage " << endl;
    cout << "\tA - Custom tip amount " << endl;
    cout << "Enter your menu choice [T, F, W, P, A]: ";
    cin >> choice;
    cout << endl;

    return choice;
}

double calcTotalSale(double salesAmount, double tipAmt) {
    return salesAmount + tipAmt;
}

void displayResults(double salesAmount, double tipAmt, double totalSale) {
    cout << fixed << setprecision(2);
    cout << "Sales Amount: $" << salesAmount << endl;
    cout << "Tip Amount: $" << tipAmt << endl;
    cout << "Total Due: $" << totalSale << endl;
}
