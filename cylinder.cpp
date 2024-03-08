#include <iostream>
using namespace std;

void calculateSurfaceArea() {
    float radius, height;

    // Input radius and height
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate surface area
    float surfaceArea = 2 * 3.14159 * radius * (radius + height);

    // Output the result
    cout << "The surface area of the cylinder is: " << surfaceArea << endl;
}

int main() {
    calculateSurfaceArea(); // Call the function to calculate the surface area
    return 0;
}
