#include <iostream>
using namespace std;

int main() {
    double height, weight;
    cout << "Enter height (in meters): ";
    cin >> height;
    cout << "Enter weight (in kilograms): ";
    cin >> weight;

    double bmi = weight / (height * height);

    cout << "BMI: " << bmi << endl;

    switch(static_cast<int>(bmi)) {
        case 0 ... 19:
            cout << "Lower than normal weight" << endl;
            break;
        case 20 ... 25:
            cout << "Normal Weight" << endl;
            break;
        case 26 ... 30:
            cout << "Overweight" << endl;
            break;
        case 31 ... 40:
            cout << "Obese" << endl;
            break;
        default:
            cout << "Extreme obese" << endl;
            break;
    }

    return 0;
}


