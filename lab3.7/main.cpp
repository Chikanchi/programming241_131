#include <iostream>
#include <memory>
#include "TransportUnit.h"
#include "Car.h"
#include "Truck.h"
#include "Route.h"
#include "AssignedRoute.h"

using namespace std;

int main() {
    Route route1("Москва", "Санкт-Петербург", 700);
    Route route2("Казань", "Нижний Новгород", 400);

    AssignedRoute road1(route1, make_unique<Car>());
    AssignedRoute road2(route2, make_unique<Truck>());

    route1.printInfo();
    cout << "Стоимость проезда: " << road1.calculateTotalCost() << endl;

    route2.printInfo();
    cout << "Стоимость проезда: " << road2.calculateTotalCost() << endl;

    return 0;
}