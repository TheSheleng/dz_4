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

void Point::saveFile(const char* path, int index)
{
    fstream file(path, ios::binary | ios::out);
    file.seekp(index * (sizeof * this), ios::beg);

    file.write((char*)&*this, sizeof * this);
    file.close();
}

void Point::getFile(const char* path, int index)
{
    fstream file(path, ios::binary | ios::in);
    file.seekp(index * (sizeof * this), ios::beg);

    file.read((char*)&*this, sizeof * this);
    file.close();
}