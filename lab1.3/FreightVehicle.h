#ifndef FREIGHTVEHICLE_H
#define FREIGHTVEHICLE_H

#include "Vehicle.h"
#include <string>

using namespace std;

class FreightVehicle : public Vehicle {
private:
    int cargoCapacity;

public:
    FreightVehicle(string brand, int maxSpeed, int cargoCapacity);

    void getStatus() override;
};

#endif