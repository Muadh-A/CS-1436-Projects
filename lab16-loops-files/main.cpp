
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void displayRecord(unsigned int storeNumber, double sales)
{
    int barCount = static_cast<int>(sales / 1000.0);

    cout << "Store Number:" << setw(5) << storeNumber;
    cout << "\tSales:" << setw(10) << fixed << setprecision(2) << sales;
    cout << "\t";

    for(int i = 0; i < barCount; i++)
    {
        cout << "$";
    }

    cout << endl;
}

int main()
{
    string fileName;
    ifstream inputFile;
    unsigned int storeNum;
    double sales;

    cout << "Enter the name of the file that contains the sales data.\n";
    cin >> fileName;

    inputFile.open(fileName.c_str());

    if(!inputFile)
    {
        cout << "\nError, unable to open the input file.\n";
        return 0;
    }


    if(!(inputFile >> storeNum >> sales))
    {
        cout << "\nUnable to read sales record from the file.\n";
        inputFile.close();
        return 0;
    }

    cout << "\n\n\tSALES BARCHART - Each $ represents $1,000 in sales.\n\n";

    displayRecord(storeNum, sales);

    while(inputFile >> storeNum >> sales)
    {
        displayRecord(storeNum, sales);
    }

    inputFile.close();

    cout << endl;
    return 0;
}

