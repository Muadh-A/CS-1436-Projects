#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double findVolume(double radius) {
    const double PI = acos(-1);
    double volume = (4.0 / 3.0) * PI * pow(radius, 3);
    return volume;
}

double findSurfaceArea(double radius) {
    const double PI = acos(-1);
    double surfaceArea = 4 * PI * pow(radius, 2);
    return surfaceArea; 
}

int main() {
    const double PI = acos(-1);
    double radius;
    
    cout << "\tSphere Calculator\t" << endl; 
    cout << "Please enter the radius of a sphere: ";
    cin >> radius;
    
    if (radius > 0) {
        double volume = findVolume(radius);
        double surfaceArea = findSurfaceArea(radius);
        
    cout << fixed << endl;
    cout << "A sphere with a radius of " << setprecision(3) << radius << " has:" << endl;
    cout << setprecision(3) << "\tVolume = " << volume << " cubic units." << endl;
    cout << setprecision(3) << "\tSurface area = " << surfaceArea << " square units.";
    }
    
    else {
        cout << "\nError, the radius must be greater than 0!";
        return 0;
    }
    
    
    
    return 0;
}


//                 Sphere Calculator

// Please enter the radius of a sphere: 3.7

// A sphere with a radius of 3.700 has:
//         Volume = 212.175 cubic units.
//         Surface area = 172.034 square units.
// ➜ 

