#pragma once 
#include "CircleType.h"
template<class T>
class CylinderType : 
  public CircleType<T>
{
public:
  CylinderType();
  CylinderType(T, T, T, T, T);
  CylinderType(PointType<T>, PointType<T>, T);

  void setHeight(T);
  T getHeight();

  double calcSurfaceArea();
  double calcVolume();

  void print();

private:  
  T height;
};

template<class T>
CylinderType<T>::CylinderType() : CircleType<T>(), height(0) { }

template<class T>
CylinderType<T>::CylinderType(T xCenter, T yCenter, T xBase, T yBase, T h) : CircleType<T>(xCenter, yCenter, xBase, yBase), height(h) { }

template<class T>
CylinderType<T>::CylinderType(PointType<T> center, PointType<T> base, T h) : CircleType<T>(center, base), height(h) { }

template<class T>
void CylinderType<T>::setHeight(T h)
{
  height = h;
}

template<class T>
double CylinderType<T>::calcSurfaceArea()
{
  double s = this->calcCircumference() * height + 2 * this->calcArea();
  return s;
}

template<class T>
double CylinderType<T>::calcVolume()
{
  double v = this->calcArea() * height;
  return v;
}

template<class T>
void CylinderType<T>::print()
{
  CircleType<T>::print();
  cout << "Surface Area: " << calcSurfaceArea() << endl;
  cout << "Volume: " << calcVolume() << endl;
}