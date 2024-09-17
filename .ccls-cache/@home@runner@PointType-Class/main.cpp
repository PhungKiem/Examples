#include <iostream>
#include "CylinderType.h"


using namespace std;

int main()
{
    CylinderType<int> cylinder1(5, 10, 2, 3, 4);
    CylinderType<double> cylinder2(3, 7, 1, 2, 3);
    cout << "Cylinder 1: " << endl;
    cylinder1.print();
    cout << "Cylinder 2: " << endl;
    cylinder2.print();
    cout << "Volume of Cylinder 1: " << cylinder1.calcVolume() << endl;
    cout << "Volume of Cylinder 2: " << cylinder2.calcVolume() << endl;
    cout << "Surface Area of Cylinder 1: " << cylinder1.calcSurfaceArea() << endl;
    cout << "Surface Area of Cylinder 2: " << cylinder2.calcSurfaceArea() << endl;
    return 0;

  
}