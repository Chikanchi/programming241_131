#ifndef WEAPON_H
#define WEAPON_H

#include "WeaponType.h"
#include <string>
using namespace std;

class Characteristic;

class Weapon {
private:
    string name;
    int damage;
    float weight;
    WeaponType type;

public:
    Weapon(string n, int d, float w, WeaponType t);
    Weapon();
    ~Weapon();

    bool isOverweight(float maxWeight);
    float totalWeight(const Weapon& other);
    float totalWeight(float otherWeight);

    string getName() const;
    virtual int getDamage() const;
    float getWeight() const;
    WeaponType getType() const;

    void setDamage(int d);

    virtual void Attack() const = 0;

    friend class Characteristic;
};

bool operator>(const Weapon& lhs, const Weapon& rhs);
bool operator<(const Weapon& lhs, const Weapon& rhs);

#endif
