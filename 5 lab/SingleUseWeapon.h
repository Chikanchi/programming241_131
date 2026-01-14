#ifndef SINGLEUSEWEAPON_H
#define SINGLEUSEWEAPON_H

#include "Weapon.h"
#include <iostream>
using namespace std;

class SingleUseWeapon : public Weapon {
private:
    mutable bool used;

public:
    SingleUseWeapon()
        : Weapon(), used(false) {}

    SingleUseWeapon(string name, int damage, float weight, WeaponType type)
        : Weapon(name, damage, weight, type), used(false) {}

    bool isUsed() const { return used; }

    void Attack() const override {
        if (used) {
            cout << "Оружие уже было использовано" << endl;
        } else {
            cout << "Атакуем одноразовым оружием" << endl;
            used = true;
        }
    }
};

#endif
