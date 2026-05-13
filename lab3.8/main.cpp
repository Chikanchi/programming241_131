#include <iostream>
#include "Warehouse.h"

using namespace std;

int main() {
    Warehouse<int> intWarehouse;
    intWarehouse.addItem(101);
    intWarehouse.addItem(202);
    intWarehouse.addItem(303);

    cout << "Int warehouse:" << endl;
    for (int i = 0; i < intWarehouse.getTotalItems(); i++) {
        cout << intWarehouse.getItem(i) << endl;
    }

    Warehouse<string> stringWarehouse;
    stringWarehouse.addItem("Телевизор");
    stringWarehouse.addItem("Ноутбук");
    stringWarehouse.addItem("Телефон");

    cout << "\nString warehouse:" << endl;
    for (int i = 0; i < stringWarehouse.getTotalItems(); i++) {
        cout << stringWarehouse.getItem(i) << endl;
    }

    return 0;
}