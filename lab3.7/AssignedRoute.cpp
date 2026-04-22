#include <iostream>
#include "AssignedRoute.h"

AssignedRoute::AssignedRoute(Route r, unique_ptr<TransportUnit> t)
    : route(r), transport(move(t)) {}

double AssignedRoute::calculateTotalCost() {
    return transport->calculateToll(route.getLength());
}