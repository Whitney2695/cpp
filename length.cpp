#include <iostream>
#include <cmath>
using namespace std;

class RightAngledTriangle {
private:
    int base;
    int height;

public:
    RightAngledTriangle() {
        base = 12;
        height = 5;
    }

    double calculateThirdSide() {
        double hypotenuse = sqrt((base * base) + (height * height));
        return hypotenuse;
    }
};

int main() {
    RightAngledTriangle triangle;
    double thirdSide = triangle.calculateThirdSide();
    cout << "The length of the third side (hypotenuse) of the right-angled triangle is: " << thirdSide << endl;
    return 0;
}
