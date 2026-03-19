#include <iostream>
#include <vector>
#include "Vehicle.h"

using namespace std;

int main() {
    string brands[] = {"BMW", "Toyota", "Mercedes", "Lada", "Ferrari"};
    int speeds[] = {220, 180, 240, 160, 320};

    vector<Vehicle> vehicles;

    for (int i = 0; i < 5; ++i) {
        vehicles.push_back(Vehicle(brands[i], speeds[i]));
    }

    for (int i = 0; i < int(vehicles.size()); ++i) {
        vehicles[i].accelerate((i+1) * 20);
    }

    vehicles[1].brake(15);
    vehicles[3].brake(10);

    for (int i = 0; i < int(vehicles.size()); ++i) {
        cout << "Транспортное средство #" << (i+1) << ":\n";
        vehicles[i].getStatus();
        cout << "-----------------\n";
    }

    return 0;
}