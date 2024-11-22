#include <iostream>
using namespace std;

int main() {
    const int size = 4; // Define the size of the matrix
    int matrix[size][size]; // Initialize a 2D array for the matrix
    int value = 1;

    int top = 0, bottom = size - 1, left = 0, right = size - 1;

    // Fill the matrix in a spiral pattern
    while (top <= bottom && left <= right) {
        // Fill the top row
        for (int i = left; i <= right; i++) {
            matrix[top][i] = value++;
        }
        top++;

        // Fill the right column
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = value++;
        }
        right--;

        // Fill the bottom row
        for (int i = right; i >= left; i--) {
            matrix[bottom][i] = value++;
        }
        bottom--;

        // Fill the left column
        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = value++;
        }
        left++;
    }

    // Print the matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

