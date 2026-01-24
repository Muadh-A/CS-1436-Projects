#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void dispFreqAndPercentages(const unsigned int freq[], const unsigned int rolls) {
    for (unsigned int i = 1; i <= 6; i++) {
        double percent = 0.0;
        percent = (static_cast<double>(freq[i]) / rolls) * 100.0;

        cout << "Face #" << i << ": Frequency:" 
             << setw(6) << freq[i]
             << " Percentage:" 
             << setw(6) << fixed << setprecision(1) << percent
             << endl;
    }
}

int main() {
    unsigned int seed;
    cin >> seed;
    srand(seed);

    unsigned int rolls;
    cout << "Please enter the number of times to roll the die: \n";
    cin >> rolls;

    unsigned int freq[7];
    for (unsigned int i = 0; i < 7; i++) {
        freq[i] = 0;
    }

    if (rolls > 0) {
        for (unsigned int i = 0; i < rolls; i++) {
            unsigned int r = (rand() % 6) + 1;
            freq[r]++;
        }
        dispFreqAndPercentages(freq, rolls);
    }

    cout << endl;
    return 0;
}