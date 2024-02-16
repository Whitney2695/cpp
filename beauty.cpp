#include <iostream>
#include <string>
using namespace std;

int main() {
    string agentName;
    int salesVolume;

    cout << "Enter the name of the sales agent: ";
    getline(cin, agentName);
    cout << "Enter the sales volume: ";
    cin >> salesVolume;

    double commissionRate;
    if (salesVolume >= 5000) {
        commissionRate = 0.15;
    } else if (salesVolume >= 4000) {
        commissionRate = 0.12;
    } else if (salesVolume >= 3000) {
        commissionRate = 0.09;
    } else if (salesVolume >= 2000) {
        commissionRate = 0.06;
    } else {
        commissionRate = 0.03;
    }
    double commission = commissionRate * salesVolume;
    
    cout << "Sales agent: " << agentName << endl;
    cout << "Commission: " << commission << endl;

    return 0;
}
