#include <iostream>

using namespace std;

int main() {
    char operation;
    float num1, num2;

    // Prompt the user to enter the operation
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    // Prompt the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the calculation based on the operation
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}
