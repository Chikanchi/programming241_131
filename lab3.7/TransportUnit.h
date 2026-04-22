#ifndef TRANPORTUNIT_H
#define TRANPORTUNIT_H

class TransportUnit {

public:
    virtual double calculateToll(double distance) const = 0;
};

#endif
