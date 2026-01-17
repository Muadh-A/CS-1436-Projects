/*
This program generates a simple subtraction problem using two random
single-digit whole numbers. A user-provided seed is used to initialize
the random number generator so results can be reproduced. The program
ensures the first number is greater than or equal to the second number,
prompts the user for an answer, checks if the answer is correct, and
then displays the correct result.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    unsigned int seed;
    int num1, num2, answer, correctAnswer;

    // Read seed value and initialize random number generator
    cin >> seed;
    srand(seed);

    // Generate random numbers from 0 to 9
    num1 = rand() % 10;
    num2 = rand() % 10;

    // Ensure num1 is greater than or equal to num2
    if (num1 < num2) {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    // Calculate the correct answer
    correctAnswer = num1 - num2;

    // Prompt the user for their answer
    cout << "What is " << num1 << " - " << num2 << "? ";
    cin >> answer;
    cout << endl;

    // Check if the user's answer is correct
    if (answer == correctAnswer) {
        cout << "Your answer is correct" << endl;
    }
    else {
        cout << "Your answer is incorrect" << endl;
    }

    // Display the correct answer
    cout << num1 << " - " << num2 << " = " << correctAnswer << endl;

    return 0; // End of program
}
