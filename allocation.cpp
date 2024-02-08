#include <iostream>
#include <string>

using namespace std;

int main() {
    string category;
    cout << "Enter student category: ";
    cin >> category;
    int amount;

    if (category == "needy" || category == "Special") {
        amount = 40000;
    } else if (category == "single") {
        amount = 30000;
    } else if (category == "marginalized") {
        amount = 35000;
    } else if (category == "other") {
        amount = 10000;
    } else {
        cout << "Invalid category entered." << endl;
        return 1;
    }

    cout << "Amount allocated: " << amount << endl;

    return 0;
}
