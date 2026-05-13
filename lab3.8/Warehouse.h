#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <vector>
#include <string>

using namespace std;

template <typename T>
class Warehouse {
private:
    vector<T> items;

public:
    void addItem(const T& item) {
        items.push_back(item);
    }

    T getItem(int index) {
        return items.at(index);
    }

    int getTotalItems() {
        return items.size();
    }
};

#endif