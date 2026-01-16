#include <iostream>   // Allows input and output using cin and cout
using namespace std;

int main() 
{
    int hours, minutes, seconds, total;
    // hours   = number of hours entered by the user
    // minutes = number of minutes entered by the user
    // seconds = number of seconds entered by the user
    // total   = total time converted to seconds

    // Prompt the user to enter time values
    cout << "Enter the time to complete the task in hours, minutes, and seconds." << endl;

    // Get hours from the user
    cout << "Enter the hours: ";
    cin >> hours;

    // Get minutes from the user
    cout << "Enter the minutes: ";
    cin >> minutes;

    // Get seconds from the user
    cout << "Enter the seconds: ";
    cin >> seconds;

    // Conversion rates:
    // 1 hour = 3600 seconds
    // 1 minute = 60 seconds
    // Convert all values to seconds and add them together
    total = (hours * 3600) + (minutes * 60) + seconds;

    // Display the total duration in seconds
    cout << endl << "The duration in seconds is " << total << "." << endl;

    return 0; // End of program
}
