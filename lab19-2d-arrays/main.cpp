// This program fills a 10x8 array with random numbers from 1 to 10 (inclusive).
// It then prints the sum of the (up/down/left/right) neighbors of each element.
// Filling order: lowest row subscript going upward: [0][0], [1][0], ... then next column [0][1], ...

#include <iostream>
#include <cstdlib>
using namespace std;

const int ROWS = 10;
const int COLS = 8;

void fillArray(int arr[][COLS], int rows, int cols);
int findSumOfNeighbors(const int arr[][COLS], int r, int c, int rows, int cols);

int main() {
    unsigned int seed;
    cin >> seed;
    srand(seed);

    int arr[ROWS][COLS];

    fillArray(arr, ROWS, COLS);

    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            int sum = findSumOfNeighbors(arr, r, c, ROWS, COLS);

            cout << "The sum of the neighbors of array["
                 << r << "][" << c << "] is "
                 << sum << "." << endl;
        }
    }

    return 0;
}

void fillArray(int arr[][COLS], int rows, int cols) {
    for (int c = 0; c < cols; c++) {
        for (int r = 0; r < rows; r++) {
            arr[r][c] = (rand() % 10) + 1;
        }
    }
}

int findSumOfNeighbors(const int arr[][COLS], int r, int c, int rows, int cols) {
    int sum = 0;

    if (r > 0)
        sum += arr[r - 1][c];      // above
    if (r < rows - 1)
        sum += arr[r + 1][c];      // below
    if (c > 0)
        sum += arr[r][c - 1];      // left
    if (c < cols - 1)
        sum += arr[r][c + 1];      // right

    return sum;
}
