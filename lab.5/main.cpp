#include <iostream>
#include <vector>
#include "TransportUnit.h"
#include "Car.h"
#include "Truck.h"
#include "Route.h"
#include "AssignedRoute.h"

using namespace std;

int main() {
    Car myCar;
    Truck myTruck;

    Route route1("Москва", "Санкт-Петербург", 700);
    Route route2("Казань", "Нижний Новгород", 400);

    AssignedRoute road1(route1, &myCar);
    AssignedRoute road2(route2, &myTruck);

    route1.printInfo();
    cout << "Стоимость проезда: " << road1.calculateTotalCost() << endl;

    route2.printInfo();
    cout << "Стоимость проезда: " << road2.calculateTotalCost() << endl;

    return 0;
}