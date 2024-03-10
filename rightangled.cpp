#include <iostream>
using namespace std;

// Function to print asterisks in a rectangle shape
void printRectangle(int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int numRows, numCols;

    // Input the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> numRows;
    cout << "Enter the number of columns: ";
    cin >> numCols;

    // Call the function to print rectangle of asterisks
    printRectangle(numRows, numCols);

    return 0;
}
