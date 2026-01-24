//This program will take the sale amount, tip amount, then give you the total.
// you will also get the tip amount for 20, 22, and 25 percent tips.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
    double saleAmount, tip20, tip22, tip25, tipAmount, Total, tipTotal;
    
    cout << "Enter the amount of the sale in $: ";
    cin >> saleAmount;
    cout << endl;
    
    //get tip total for each percent
    tip20 = saleAmount * 0.20;
    tip22 = saleAmount * 0.22;
    tip25 = saleAmount * 0.25;
    
    //print tip totals
    cout << fixed;
    cout << "20% tip: $" << setprecision(2) << tip20 << endl;
    cout << "22% tip: $" << setprecision(2) << tip22 << endl;
    cout << "25% tip: $" << setprecision(2) << tip25 << endl << endl;

    //prompt how much tip
    cout << "Enter the amount of the tip in $: ";
    cin >> tipAmount;
    cout << endl;
    
    //add to find total amount
    Total = saleAmount + tipAmount;
    
    //print sale amount, tip amount, and total
    cout << left << setw(15) << setprecision(2) << "Sales Amount: " << "$" << saleAmount << endl;
    cout << left << setw(15) << setprecision(2) << "Tip Amount: " << "$" << tipAmount << endl;
    cout << left << setw(15) << setprecision(2) << "Total: " << "$" << Total << endl; 
    
    return 0;
}


// Enter the amount of the sale in $: 49.1

// 20% tip: $9.82
// 22% tip: $10.80
// 25% tip: $12.28

// Enter the amount of the tip in $: 10

// Sales Amount:  $49.10
// Tip Amount:    $10.00
// Total:         $59.10
// ➜ 