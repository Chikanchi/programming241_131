#pragma once

#include "TransportUnit.h"
#include "Route.h"
#include <memory>

using namespace std;

class AssignedRoute {
private:
    Route route;
    unique_ptr<TransportUnit> transport;

public:
    AssignedRoute(Route r, unique_ptr<TransportUnit> t);
    double calculateTotalCost();
};

