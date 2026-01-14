#include "Characteristic.h"

Characteristic::Characteristic(int s) : strength(s) {}

int Characteristic::getStrength() const {
    return strength;
}

int Characteristic::GetDamage(const Weapon& w) const {
    return strength + w.damage;
}
