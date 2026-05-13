#include <iostream>
#include <vector>
#include <algorithm>
#include "Vehicle.h"

using namespace std;

int main() {
    vector<Vehicle> vehicles = {
        Vehicle("BMW", 250),
        Vehicle("Audi", 240),
        Vehicle("Toyota", 180),
        Vehicle("Mercedes", 260)
    };

    sort(vehicles.begin(), vehicles.end());

    cout << "После сортировки по maxSpeed:\n";

    for (const auto& v : vehicles) {
        cout << v.getBrand() << " - " << v.getMaxSpeed() << endl;
    }

    return 0;
}