#include <iostream>
#include "AssignedRoute.h"

AssignedRoute::AssignedRoute(Route r, TransportUnit* t)
    : route(r), transport(t) {}

double AssignedRoute::calculateTotalCost() {
    return transport->calculateToll(route.getLength());
}