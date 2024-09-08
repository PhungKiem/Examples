//This File is The main to test the functions of the PointType Class

#include <iostream>
#include <iomanip>
#include "PointType.h"
using namespace std;

int main()
{

  cout<< "From Default Constructor: " << endl;
  PointType<int> p1I;
  PointType<double> p1D;
    cout << "Integer Point:";
    p1I.print();
    cout << "Double Point:";
    p1D.print();

  cout << "\nConstrutor with Parameters: " << endl;
  PointType<int> p2I(3,5);
  PointType<double> p2D(3.5,5.5);
  cout << "Integer Point:";
  p2I.print();
  cout << "Double Point:";
  p2D.print();

  cout << "\n(integer) Distance =";
  double distance = p1I - p2I;
  cout << distance << endl;

  cout << "\n(double) Distance =";
  distance = p1D - p2D;
  cout << distance << endl;
}