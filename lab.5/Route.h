#ifndef ROUTE_H
#define ROUTE_H

#include <string>

using namespace std;

class Route {
private:
    string startPoint;
    string endPoint;
    int length;

public:
    Route(string startPoint, string endPoint, int length);
    void printInfo();
    int getLength() const;
};

#endif
