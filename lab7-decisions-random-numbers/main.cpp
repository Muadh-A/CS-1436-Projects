/*
    This program simulates rolling two six-sided dice using random numbers.
    It seeds the random number generator using a user-provided value, then
    generates two dice rolls between 1 and 6. The program displays each die,
    calculates their total, and determines the game outcome based on the sum.
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int die1, die2, seed, total;
    seed = time(0); // gets urrent timw in seconds
    cin >> seed;
    srand(seed); // seeds with that time
    
    // random between 1 - 6 for dice
    die1 = (rand() % 6) + 1;
    die2 = (rand() % 6) + 1;
    
    cout << "Die 1: " << die1 << endl;
    cout << "Die 2: " << die2 << endl;
    
    total = die1 + die2;
    
    if (total == 2 || total == 3)
    {
        cout << "\nPlayer wins.";
    } 
    
    else if (total == 12)
    {
        cout << "\nStart Over.";
    }
    
    else if (total == 7 || total == 11)
    {
        cout << "\nPlayer loses.";
    }
    
    else 
    {
        cout << "\nKeep rolling.";
    }
  
    
    return 0;
}
