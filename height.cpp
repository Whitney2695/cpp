#include <iostream>
using namespace std;
int main() {
    double height, weight;

    // Input height and weight from the user
    cout << "Enter your height (in meters): ";
    cin >> height;
    cout << "Enter your weight (in kilograms): ";
    cin >> weight;
    
    double bmi = weight / (height * height);

    string message;
    if (bmi < 20) {
        message = "Lower than normal weight";
    } else if (bmi >= 20 && bmi <= 25) {
        message = "Normal Weight";
    } else if (bmi > 25 && bmi <= 30) {
        message = "Overweight";
    } else if (bmi > 30 && bmi <= 40) {
        message = "Obese";
    } else {
        message = "Extreme obese";
    }
    cout << "Your BMI is: " << bmi << endl;
    cout << "Message: " << message << endl;

    return 0;
}
