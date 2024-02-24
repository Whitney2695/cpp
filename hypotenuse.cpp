#include<iostream>
#include<cmath>
using namespace std;
void area(int a, int b);
float hypo(int a, int b); 
int main()
{
    int a, b;
    cout<<"Enter the base"<<endl;
    cin>>a;
    cout<<"Enter the height"<<endl;
    cin>>b;
    //function call
    area(a, b);
    float hypotenuse = hypo(a, b); 
    cout << "The hypotenuse: " << hypotenuse << endl; 
    return 0;
}
//function declaration
void area(int a, int b)
{
    float area;
    area = (a * b) / 2.0; 
    cout<<"The Area: " << area << endl; 
}
float hypo(int a, int b)
{
    float hypo;
    hypo = sqrt(pow(b, 2) + pow(a, 2));
    return hypo; 
}
