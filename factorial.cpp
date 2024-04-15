#include <iostream>
using namespace std;

class FactorialCalculator {
private:
    int number;

public:
    // Constructor to initialize the number
    FactorialCalculator(int num) : number(num) {}

    // Function to calculate factorial
    int calculateFactorial() {
        if (number < 0) {
            cout << "Factorial undefined for negative numbers." << endl;
            return -1; // Returning -1 to indicate error
        }
        int factorial = 1;
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        return factorial;
    }
};

int main() {
    int num;
    cout << "Enter a number to calculate factorial: ";
    cin >> num;

    // Create an object of FactorialCalculator
    FactorialCalculator calc(num);

    // Calculate factorial using encapsulation
    int result = calc.calculateFactorial();

    if (result != -1) {
        cout << "Factorial of " << num << " is: " << result << endl;
    }

    return 0;
}
