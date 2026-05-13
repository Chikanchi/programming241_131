#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
private:
    string brand;
    int maxSpeed;
    int currentSpeed;

public:
    Vehicle(string brand, int maxSpeed);

    void accelerate(int increment);
    void brake(int decrement);
    void getStatus();

    bool operator<(const Vehicle& other) const;

    int getMaxSpeed() const;
    string getBrand() const;
};

#endif