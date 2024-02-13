#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int salesVolume;
    
    cout << "Enter sales agent's name: ";
    getline(cin, name);

    cout << "Enter sales volume: ";
    cin >> salesVolume;

    double commissionRate;

    switch(salesVolume) {
        case 5000 ... 10000 :
            commissionRate = 0.15;
            break;
        case 4000 ... 4999:
            commissionRate = 0.12;
            break;
        case 3000 ... 3999:
            commissionRate = 0.09;
            break;
        case 2000 ... 2999:
            commissionRate = 0.06;
            break;
        default:
            commissionRate = 0.03;
            break;
    }

    double commission = commissionRate * salesVolume;

    cout << "Sales agent: " << name << endl;
    cout << "Commission: " << commission << endl;

    return 0;
}
