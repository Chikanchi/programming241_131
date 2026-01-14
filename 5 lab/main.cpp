#include <iostream>
#include "Weapon.h"
#include "Characteristic.h"
#include "WeaponType.h"
#include "Player.h"
#include "MagicWeapon.h"
#include <windows.h>
#include "SingleUseWeapon.h"
#include "DualHand.h"
using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    MagicWeapon magicStick("Волшебная палочка", 20, 2.5f, ONEHANDED, 10);
    magicStick.Attack();

    SingleUseWeapon dagger("Метательный нож", 15, 1.0f, ONEHANDED);
    dagger.Attack();
    dagger.Attack();

    DualHand<MagicWeapon, SingleUseWeapon> hands(magicStick, dagger);
    cout << "Левая рука: " << hands.getLeft().getName() << ", урон: " << hands.getLeft().getDamage() << endl;
    cout << "Правая рука: " << hands.getRight().getName() << ", урон: " << hands.getRight().getDamage() << endl;    
}
