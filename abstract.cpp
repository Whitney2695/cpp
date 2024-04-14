#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function (abstract method)
    virtual void displayArea() = 0;
};

// Concrete class 1
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementation of abstract method
    void displayArea() override {
        double area = 3.14 * radius * radius;
        cout << "Area of the circle: " << area << endl;
    }
};

// Concrete class 2
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementation of abstract method
    void displayArea() override {
        double area = length * width;
        cout << "Area of the rectangle: " << area << endl;
    }
};

int main() {
    // Create objects of concrete classes
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Call abstract method using objects
    circle.displayArea();
    rectangle.displayArea();

    return 0;
}
