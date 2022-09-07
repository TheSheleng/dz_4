#include "Point.h"

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