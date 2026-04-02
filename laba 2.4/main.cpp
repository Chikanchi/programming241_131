#include <iostream>
#include <vector>

#include "TransportUnit.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    vector<TransportUnit*> vehicle;
    vehicle.push_back(new Car());
    vehicle.push_back(new Truck());

    for (int i = 0; i < int(vehicle.size()); i++) {
        cout << "Плата: " << vehicle[i]->calculateToll(100) << endl;
    }

    for (int i = 0; i < int(vehicle.size()); i++) {
        delete vehicle[i];
    }

    return 0;
}