#pragma once

#include <iostream>
#include <fstream>

using namespace std;

#define DIMS 3

#define a_X 0
#define a_Y 1
#define a_Z 2

class Point
{
    double coords[DIMS] = {};

public:
    void enter();
    void print();

    void setCoord(int a_I, double coord);
    double getCoord(int a_I);

    void saveFile(const char* path, int index);
    void getFile(const char* path, int index);
};

