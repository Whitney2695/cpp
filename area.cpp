#include <iostream>
using namespace std;
int main(){
    int l;
    int w;
    float area;
    float perimeter;
    cout <<"enter the length:";
    cin >>l;
    cout <<"enter the length:";
    cin >>w;
    area=l*w;
    perimeter=2*(l+w);
    cout<<"the perimeter ="<<perimeter;
    cout<<"\nthe area ="<<area;
    return 0;
}