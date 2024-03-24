#include <iostream>

using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Calculate factorial
    int result = factorial(num);

    // Display the result
    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}
