#include <iostream>
#include <string>
using namespace std;

int main() {
    string category;
    cout << "Enter student category: ";
    cin >> category;

    int amount;

    // Convert category to lowercase to handle case-insensitivity
    for (char &c : category)
        c = tolower(c);

    // Switch-case to determine amount based on category
    switch(category[0]) {
        case 'n':
            amount = 40000;
            break;
        case 's':
            amount = 30000;
            break;
        case 'm':
            amount = 35000;
            break;
        case 'o':
            amount = 10000;
            break;
        default:
            cout << "Invalid category entered!" << endl;
            return 1; // Exit program with error status
    }

    cout << "Amount allocated: " << amount << endl;

    return 0;
}
