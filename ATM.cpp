#include <iostream>
#include <iomanip>

using namespace std;

// Function to display menu options
void displayMenu() {
    cout << "\nATM Menu\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
}

// Function to check account balance
void checkBalance(double balance) {
    cout << "Your current balance is: $" << fixed << setprecision(2) << balance << endl;
}

// Function to deposit money into the account
void deposit(double &balance) {
    double amount;
    cout << "Enter amount to deposit: $";
    cin >> amount;
    if (amount > 0) {
        balance += amount;
        cout << "Deposit successful. New balance is: $" << fixed << setprecision(2) << balance << endl;
    } else {
        cout << "Invalid amount. Please enter a positive value.\n";
    }
}

// Function to withdraw money from the account
void withdraw(double &balance) {
    double amount;
    cout << "Enter amount to withdraw: $";
    cin >> amount;
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawal successful. New balance is: $" << fixed << setprecision(2) << balance << endl;
    } else if (amount <= 0) {
        cout << "Invalid amount. Please enter a positive value.\n";
    } else {
        cout << "Insufficient funds.\n";
    }
}

int main() {
    double accountBalance = 1000.00;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance(accountBalance);
                break;
            case 2:
                deposit(accountBalance);
                break;
            case 3:
                withdraw(accountBalance);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
