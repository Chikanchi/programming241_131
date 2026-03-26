#pragma once

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
