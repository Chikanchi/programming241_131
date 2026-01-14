#ifndef MAGICWEAPON_H
#define MAGICWEAPON_H

#include "Weapon.h"
#include <string>
using namespace std;

class MagicWeapon : public Weapon {
private:
    int extraDamage;

public:
    MagicWeapon(string name, int damage, float weight, WeaponType type, int extra);
    MagicWeapon();

    int getExtraDamage() const;

    int getDamage() const override;

    void Attack() const override;
};

#endif
