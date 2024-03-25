#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;

    // Prompt the user to enter their name
    cout << "Enter your name: ";
    getline(cin, name);

    // Greet the user
    cout << "Hello, " << name << "! Welcome to the C++ program." << endl;

    return 0;
}
