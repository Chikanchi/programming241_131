#include <iostream>
#include "FreightVehicle.h"

using namespace std;

FreightVehicle::FreightVehicle(string brand, int maxSpeed, int cargoCapacity)
    : Vehicle(brand, maxSpeed), cargoCapacity(cargoCapacity) {}

void FreightVehicle::getStatus() {
    Vehicle::getStatus();
    cout << "Максимальная грузоподъемность: " << cargoCapacity << endl;
}