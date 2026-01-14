#include "MagicWeapon.h"
#include <string>
#include <iostream>
using namespace std;

MagicWeapon::MagicWeapon(string name, int damage, float weight, WeaponType type, int extra)
    : Weapon(name, damage, weight, type), extraDamage(extra) {}

MagicWeapon::MagicWeapon()
    : Weapon(), extraDamage(0) {}

int MagicWeapon::getExtraDamage() const {
    return extraDamage;
}

int MagicWeapon::getDamage() const {
    return Weapon::getDamage() + extraDamage;
}

void MagicWeapon::Attack() const {
    cout << "Атакуем магическим оружием" << endl;
}
