#include<iostream>
using namespace std;

// Function to print inverted triangle of asterisks
void printInvertedTriangle() {
    

    for (int i = 5; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    // Call the function to print inverted triangle of asterisks
    printInvertedTriangle();

    return 0;
}
