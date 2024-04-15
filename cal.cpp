#include <iostream>
using namespace std;

// Function to perform addition
int add(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function to perform multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function to perform division
float divide(int a, int b) {
    if (b == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
    return static_cast<float>(a) / b;
}

// Function to perform modulus
int modulus(int a, int b) {
    return a % b;
}

int main() {
    char choice;
    do {
        cout << "CALCULATOR MENU CHOICES" << endl;
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus" << endl;
        cout << "Enter your choice: ";
        int operation;
        cin >> operation;
        
        int num1, num2;
        cout << "Enter your two numbers: ";
        cin >> num1 >> num2;

        int result;
        switch (operation) {
            case 1:
                result = add(num1, num2);
                break;
            case 2:
                result = subtract(num1, num2);
                break;
            case 3:
                result = multiply(num1, num2);
                break;
            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                continue; // Skip asking for continuation since divide function already handled it
            case 5:
                result = modulus(num1, num2);
                break;
            default:
                cout << "Invalid choice!" << endl;
                continue; // Skip asking for continuation if choice is invalid
        }

        cout << "Result: " << result << endl;

        // Ask user if they want to continue
        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Calculator program terminated." << endl;

    return 0;
}
