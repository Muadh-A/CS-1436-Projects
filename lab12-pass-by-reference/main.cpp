#include <iostream>
#include <iomanip>
using namespace std;

bool getValidDate(int &month, int &day, int &year);
bool isLeapYear(int &year);
int numberOfDays(int &month, int &day, int& year, string &monthName);
void monthNameFunction(int &month, string &monthName);

int main() {
    int month, day, year, totalDays, extra;
    char slash;
    string monthName;

    cout << "Enter a date [MM/DD/YYYY]: ";
    cin >> month >> slash >> day >> slash >> year;
    isLeapYear(year);
   
    if (getValidDate(month, day, year) == true) {
        monthNameFunction(month, monthName);
        numberOfDays(month, day, year, monthName);
    }
   
    else {
        extra = 1;
       
    }
    
    return 0;
}
    

    bool getValidDate(int &month, int &day, int& year) {
    cout << endl; 

 
    if (month < 1 || month > 12) {
        cout << "Error: " << month << "/" << day << "/" << year
             << " is not a valid date." << endl;
        cout << "Error: " << setfill('0') << setw(2) << month << "/"
             << setw(2) << day << "/" << setw(4) << year
             << " is not a valid date." << endl; 
        return false;
    }
    
    else {
        return true;
    }
   

    if (day > 0 & day <= 31) {
        return true;
   
    }
    
    else {
        cout << "\nError: " << month << '/' << day << '/' 
             << year << " is not a valid date.\n";
        return false;
    }
}

bool isLeapYear(int &year) {
   
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            return true;
        }
       
        else {
            return false;
        }
       
    }
   
    else {
        if (year % 4 == 0) {
            return true;
        }
       
        else {
            return false;
        }
       
    }
   
   
}

int numberOfDays(int &month, int &day, int& year, string &monthName) {
    int daysInYear;
    daysInYear = day;
   
    if (month > 1) {
        daysInYear += 31;
    }
   
    if (month > 2) {
       if(isLeapYear(year) == true) {
           daysInYear += 29;
       }
        else {
            daysInYear += 28;
        }
    }
    
    if (month > 3) {
        daysInYear += 31;
    }
    
    if (month > 4) {
        daysInYear += 30;
    }
    
    if (month > 5) {
        daysInYear += 31;
    }
    
    if (month > 6) {
        daysInYear += 30;
    }
    
    if (month > 7) {
        daysInYear += 31;
    }
    
    if (month > 8) {
        daysInYear += 31;
    }
    
    if (month > 9) {
        daysInYear += 30;
    }
    
    if (month > 10) {
        daysInYear += 31;
    }
    
    if (month > 11) {
        daysInYear += 30;
    }
   
    cout << monthName << " " << day << " is day " << daysInYear
         << " of " << setfill('0') << setw(4) << year << "." << endl;
   
    return daysInYear;
   
}

void monthNameFunction(int &month, string &monthName) {
    switch(month) {
        case 1:
            monthName = "January";
            break;
        case 2:
            monthName = "February";
            break;
        case 3:
            monthName = "March";
            break;
        case 4:
            monthName = "April";
            break;
        case 5:
            monthName = "May";
            break;
        case 6:
            monthName = "June";
            break;
        case 7:
            monthName = "July";
            break;
        case 8:
            monthName = "August";
            break;
        case 9:
            monthName = "September";
            break;
        case 10:
            monthName = "October";
            break;
        case 11:
            monthName = "November";
            break;
        case 12:
            monthName = "December";
            break;
       
       
    }
   
}


