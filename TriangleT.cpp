#include<iostream>
using namespace std;

class Triangle {
private:
    int b;   
    int h;   
    int hyp; 

public:
    Triangle() {
         b = 3;
        h = 4;
        hyp = 5;
    }

    float area() {
      return (b * h) / 2.0; 
    }

    int perimeter() {
        return b + h + hyp;
    }
};

int main() {
    Triangle T;
    cout << "The area=" << T.area() << endl;
    cout << "The perimeter=" << T.perimeter();
    return 0;
}
