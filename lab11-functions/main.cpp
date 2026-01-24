#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

double findDeposit(double balance, double amount) {
    double newBalance = balance + amount;
    return newBalance;
}

double findWithdrawal(double balance, double amount) {
    double newBalance1 = balance - amount;
    return newBalance1;
}

int main() {
    int seed;
    string letterInput;
    double amount, newBalance, newBalance1;
    
    cin >> seed;
    srand(seed);
    double balance = rand() % 10001;

    cout << "\tATM Menu\n" << endl << fixed
         << "B - Check account balance\n" 
         << "D - Deposit money\n"
         << "W - Withdraw money\n"
         << endl << "Enter the letter of your desired transaction: ";
    cin >> letterInput;
    
    //Balance in bank account
    if (letterInput == "b" || letterInput == "B") {
        cout << "\nYour balance is $" << fixed << setprecision(2) << balance << ".\n";
        
        return 0;
    }
    
    //Deposit to bank account
    else if (letterInput == "D" || letterInput == "d") {
        double depositAmount;
        cout << "Enter your deposit amount: ";
        cin >> depositAmount;
        
        if (depositAmount > 0) {
            newBalance = findDeposit(balance, depositAmount);
            cout << "\nYour balance is $" << setprecision(2) << newBalance << ".\n";
        }
        
        else {
            cout << "\nInvalid deposit amount.\n";
            cout << "\nYour balance is $" << setprecision(2) << balance << ".\n";
            return 0;
        }
        
        return 0;
    }
    
    //Withdrawal from input
    else if (letterInput == "W" || letterInput == "w") {
        double withdrawalAmount;
        double amount;
        cout << "Enter your withdrawal amount: ";
        cin >> withdrawalAmount;
        cout << endl;
        
        if (withdrawalAmount > balance){
            cout << "You do not have sufficient funds for this withdrawal.\n" 
                 << setprecision(2) << "\nYour balance is $" << balance << ".\n";    
            return 0;
        }
        
        else if (withdrawalAmount <= 0) {
            cout << "Invalid withdrawal amount\n" << "\nYour balance is $" << setprecision(2) << balance << ".\n";
            return 0;
        }
        
        else {
             newBalance1 = findWithdrawal(balance, withdrawalAmount);
             cout << "Your balance is $" << setprecision(2) << newBalance1 << ".\n";
        }
       
    
        
        
        return 0;
    }
    
    //If not any of valid inputs 
    else {
        cout << "\nInvalid transaction choice.\n";
        return 0;
    }
    
    return 0;
}



