//Program accepts value of a stock sale 
//and displays certain count of commision on sale

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // declare variables
    double stockSale, commission;

    cout << fixed << setprecision(2);
    cout << "Please enter the amount of the stock sale: $ ";
    cin >> stockSale;
    
    // sale amount less than zero
    if (stockSale <= 0 )
    {
        cout << "\nError, invalid sales amount entered." << endl;
    }
    
    // sale amount through 500
    else if (stockSale <= 500)
    {
        commission = 35;
        cout << "\nThe commission is $" << commission;
    }

    // sale amount 500 through 1500
    else if (stockSale <= 1500 && stockSale > 500)
    {
        commission = 35 + 0.02 * (stockSale - 500);
        cout << "\nThe commission is $" << commission;
    }
    
    // sale amount over 1500 and 10000
    else if (stockSale <= 10000 && stockSale > 1500) 
    {
        commission = 45 + 0.01 * (stockSale - 1500);
        cout << "\nThe commission is $" << commission;
    }
    
    // sale amount between 10000 and 100000
    else if (stockSale <= 100000 && stockSale > 10000) 
    {
        commission = 130 + 0.0075 * (stockSale - 10000);
        cout << "\nThe commission is $" << commission;
    }
    
    // sale amount over 100000
    else if (stockSale > 100000)
    {
        commission = 1000;
        cout << "\nThe commission is $" << commission;
    }
    
    return 0;
}



