#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double distance, timeTaken, speed;
    unsigned int medium;
    string mediumName;
    
    
    const double SPEED_WOOD = 12631.230;
    const double SPEED_STEEL = 10614.815;
    const double SPEED_WATER = 4714.572;
    const double SPEED_AIR = 1125.334;
    
    
    
    cout << "\tTime for Sound to Travel through a Medium given Distance\n";
    cout << endl;
    cout << "1 - Wood\n";
    cout << "2 - Steel\n";
    cout << "3 - Water\n";
    cout << "4 - Air\n" << endl;

    cout << "Enter the number of the medium: ";
    cin >> medium;
    
    switch (medium) {
        case 1:
            speed = SPEED_WOOD;
            mediumName = "wood";
            break;
        case 2:
            speed = SPEED_STEEL;
            mediumName = "steel";
            break;
        case 3:
            speed = SPEED_WATER;
            mediumName = "water";
            break;
        case 4:
            speed = SPEED_AIR;
            mediumName = "air";
            break;
        default:
            cout << "\nError, invalid medium!" << endl;
            cout << "Please run the program again." << endl;
            return 0;
    }

    cout << "Enter the distance to travel (in feet): ";
    cin >> distance;
    
    if (distance <= 0) {
        cout << "Input error! The distance must be greater than zero.";
        
    }
    else if (distance == 0) {
        cout << "Input error! The distance must be greater than zero.";
    }
    
    else {
        timeTaken = distance / speed;
        
        cout << endl;
        
        cout << fixed;
        cout << "In " << mediumName << " it will take " 
             << setprecision(4) << timeTaken << " seconds to travel " 
             << setprecision(1) << distance << " feet.\n"; 
    }
    return 0;
}
