#include <iostream>
#include "Vehicle.h"
#include "DispatchCenter.h"

using namespace std;

Vehicle::Vehicle(std::string brand, int maxSpeed)
    : brand(brand), maxSpeed(maxSpeed), currentSpeed(0)
{
    DispatchCenter::totalVehiclesDispatched++;
}

void Vehicle::accelerate(int value) {
    currentSpeed += value;

    if (currentSpeed > maxSpeed) {
        currentSpeed = maxSpeed;
    }
}

void Vehicle::brake(int value) {
    currentSpeed -= value;

    if (currentSpeed < 0) {
        currentSpeed = 0;
    }
}

void Vehicle::getStatus() {
    cout << "Марка: " << brand << endl;
    cout << "Максимальная скорость: " << maxSpeed << endl;
    cout << "Текущая скорость: " << currentSpeed << endl;
}