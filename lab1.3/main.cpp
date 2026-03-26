#include <iostream>
#include <vector>
#include "FreightVehicle.h"

using namespace std;

int main() {
    vector<FreightVehicle> trucks;
    trucks.push_back(FreightVehicle("Kamaz", 120, 5));
    trucks.push_back(FreightVehicle("Volvo", 130, 7));

    for (int i = 0; i < int(trucks.size()); i++) {
        trucks[i].getStatus();
        cout << "------------------\n";
    }

    return 0;
}