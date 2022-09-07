#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    const char path[] = "testFile.txt";

    Point test;
    test.enter();
    test.saveFile(path, 0);

    Point test2;
    test2.getFile(path, 0);
    test2.print();

    test.setCoord(a_X, 0);
    cout << test.getCoord(a_X) << endl;
}