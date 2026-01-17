// This program generates random numbers using a user-defined seed
// and the current time to show the difference in random sequences.


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    int seed;
    
    cin >> seed;
    srand(seed);
    cout << "First 5 numbers (seed = user input): ";
    cout << rand() << ", ";
    cout << rand() << ", ";
    cout << rand() << ", ";
    cout << rand() << ", ";
    cout << rand() << endl;

    srand(time(0));
    cout << "First 5 numbers (seed = current time): ";
    cout << rand() << ", ";
    cout << rand() << ", ";
    cout << rand() << ", ";
    cout << rand() << ", ";
    cout << rand() << endl;

return 0;
}
