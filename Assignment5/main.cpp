//This program is a compass nd gives the user the bearing based on the compass heading inputted

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;


// This function gets input from the user for the compass heading, 
// which is the angle we will be working with
double userInput() {
    double compassHeading;

    cout << "Enter a compass heading [0-360 degrees]: ";
    cin >> compassHeading;

    if (compassHeading < 0.0 || compassHeading > 360.0) {
        cout << "Error invalid heading entered." << endl;
        cout << endl; 
        return userInput();
    }

    return compassHeading;
}


void getBearing(double compassHeading, 
                string &faceDirection, 
                double &bearingAngle, 
                string &walkDirection) {

    if (compassHeading == 0.0) {
        // compassHeading is 0
        faceDirection = "North";
        bearingAngle = 0.0;
        walkDirection = "East";
        
    }
    
    else if (compassHeading == 90.0) {
        // compassHeading is 90
        faceDirection = "North";
        bearingAngle = 90.0;
        walkDirection = "East";
        
    }
    
    else if (compassHeading == 180.0) {
        // compassHeading is 180
        faceDirection = "South";
        bearingAngle = 0.0;
        walkDirection = "East";
    }
    
    else if (compassHeading == 270.0) {
        // compassHeading is 270
        faceDirection = "North";
        bearingAngle = 90.0;
        walkDirection = "West";
    }
    
    
    else if (compassHeading == 360.0) {
        // compassHeading is 360
        faceDirection = "North";
        bearingAngle = 0.0;
        walkDirection = "East";
    }
    
    else if (compassHeading > 0 && compassHeading < 90.0 ) {
        // less than 90
        faceDirection = "North";
        bearingAngle = compassHeading;
        walkDirection = "East";
    }
    
    else if (compassHeading > 90.0 && compassHeading < 180.0) {
        //between 90 and 180
        faceDirection = "South";
        bearingAngle = 180.0 - compassHeading;
        walkDirection = "East";
    }
    
    else if (compassHeading > 180.0 && compassHeading < 270.0) {
        // between 180 and 270
        faceDirection = "South";
        bearingAngle = compassHeading - 180.0;
        walkDirection = "West";
    }
    
    else if (compassHeading > 270.0 && compassHeading < 360.0) {
        // between 270 and 360
        faceDirection = "North";
        bearingAngle = 360.0 - compassHeading;
        walkDirection = "West";
        
    }
    
    else {
        cout << "invalid\n";
    }
    
    return;
}

int main() {
    cout << fixed << showpoint << setprecision(1);
    double compassHeading;
    compassHeading = userInput();
    
    string faceDirection;
    double bearingAngle;
    string walkDirection;
    
    getBearing(compassHeading, faceDirection, bearingAngle, walkDirection);
    
    cout << faceDirection << " " 
         << setprecision(1) << bearingAngle << " degrees " << walkDirection << endl;
    return 0;
}