#include "Point.h"

void Point::enter()
{
    cout << "Enter coords: " << endl;
    for (double& i : coords)
    {
        cout << "Axis coord: ";
        cin >> i;
    }

    cout << endl;
}

void Point::print()
{
    cout << "Point: ";
    for (const double i : coords)
        cout << i << " ";

    cout << endl;
}

void Point::setCoord(int a_I, double coord)
{
    coords[a_I] = coord;
}

double Point::getCoord(int a_I)
{
    return coords[a_I];
}