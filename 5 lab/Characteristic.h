// Characteristic.h
#ifndef CHARACTERISTIC_H
#define CHARACTERISTIC_H

#include "Weapon.h"

class Characteristic {
private:
    int strength;

public:
    Characteristic(int s);

    int getStrength() const;

    int GetDamage(const Weapon& w) const;
};

#endif
