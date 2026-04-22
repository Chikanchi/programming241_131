#include "DispatchCenter.h"

using namespace std;

int DispatchCenter::totalVehiclesDispatched = 0;

void DispatchCenter::report() {
    cout << "Total vehicles dispatched: " << totalVehiclesDispatched << endl;
}