#pragma once 

#include "TransportUnit.h"
#include "Route.h"

#include <string>

using namespace std;

class AssignedRoute {
private:
    Route route;
    TransportUnit* transport;

public:
    AssignedRoute(Route r, TransportUnit* t);
    double calculateTotalCost();
};

