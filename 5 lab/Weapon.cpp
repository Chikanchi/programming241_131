#include <iostream>
#include "Weapon.h"

Weapon::Weapon(string n, int d, float w, WeaponType t) : name(n), damage(d), weight(w), type(t) {}

Weapon::Weapon() : Weapon("Unknow", 10, 2.5f, ONEHANDED) {}

Weapon::~Weapon() {
    cout << "Удаляется оружие: " << name << endl;
    cout << "Урон: " << damage << ", Вес: " << weight << endl;
}

bool Weapon::isOverweight(float maxWeight) {
    return weight > maxWeight;
}

float Weapon::totalWeight(const Weapon& other) {
    return totalWeight(other.weight);
}

float Weapon::totalWeight(float otherWeight) {
    return this->weight + otherWeight;
}

string Weapon::getName() const { return name; }
int Weapon::getDamage() const { return damage; }
float Weapon::getWeight() const { return weight; }
WeaponType Weapon::getType() const { return type; }
void Weapon::setDamage(int d) { damage = d;}

bool operator>(const Weapon& lhs, const Weapon& rhs) {
    return lhs.getDamage() > rhs.getDamage();
}

bool operator<(const Weapon& lhs, const Weapon& rhs) {
    return lhs.getDamage() < rhs.getDamage();
}