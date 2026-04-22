#include "Vehicle.h"
#include "DispatchCenter.h"

int main() {
    Vehicle v1("BMW", 250);
    Vehicle v2("Audi", 240);
    Vehicle v3("Toyota", 200);

    DispatchCenter::report();

    return 0;
}