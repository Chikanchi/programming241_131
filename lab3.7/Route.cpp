#include <iostream>
#include "Route.h"

using namespace std;

#include <string>

Route::Route(string startPoint, string endPoint, int length)
    : startPoint(startPoint), endPoint(endPoint), length(length) {}

void Route::printInfo()
{
    cout << "Маршрут из " << startPoint << " в " << endPoint << endl;
    cout << "Расстояние: " << length << endl;
}

int Route::getLength() const
{
    return length;
}