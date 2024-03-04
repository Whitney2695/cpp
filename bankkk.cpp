
#include <iostream>
#include <map>

class Bank {
private:
    std::map<std::string, double> accounts; // Map to store account number and balance

public:
    void createAccount(const std::string& accNumber) {
        // Check if account already exists
        if (accounts.find(accNumber) != accounts.end()) {
            std::cout << "Account with account number " << accNumber << " already exists." << std::endl;
        } else {
            // Create new account with initial balance 0
            accounts[accNumber] = 0.0;
            std::cout << "Account created successfully with account number " << accNumber << std::endl;
        }
    }

    void deposit(const std::string& accNumber, double amount) {
        it = accounts.find(accNumber);
        if (it != accounts.end()) {
            // Deposit amount into account
            it->second += amount;
            std::cout << "Deposited $" << amount << " into account number " << accNumber << std::endl;
        } else {
            std::cout << "Account number " << accNumber << " does not exist." << std::endl;
        }
    }

    void displayAccountDetails() {
        if (accounts.empty()) {
            std::cout << "No accounts found." << std::endl;
        } else {
            std::cout << "Account details:" << std::endl;
            for (const auto& pair : accounts) {
                std::cout << "Account Number: " << pair.first << ", Balance: $" << pair.second << std::endl;
            }
        }
    }
};

int main() {
    Bank bank;

    bank.createAccount("12345"); // Create account with account number 12345
    bank.createAccount("54321"); // Create account with account number 54321

    bank.deposit("12345", 1000); // Deposit $1000 into account 12345
    bank.deposit("54321", 2000); // Deposit $2000 into account 54321

    bank.displayAccountDetails(); // Display account details

    return 0;
}

