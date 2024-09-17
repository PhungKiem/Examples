#pragma once
#include "PointType.h"
template <class T>
class CircleType
{
public:
  static const double PI;
  CircleType();
  CircleType(T , T , T, T);


  void setCenterPoint(T,T);


  void setCircumPoint(T,T);
  
  void(getCenterPoint(T& xC, T& yC));

 
  void(getCircumPoint(T& xC, T& yC));

  
  void printCenterPoint();


  void printCircumPoint();

  double calcRadius();

  double calcArea();
  double calcCircumference();
void print();

private:
  PointType<T> centerPoint;
  PointType<T> circumPoint;

};


template <class T>
 const double CircleType<T> :: PI = 3.14159;

template <class T>
CircleType<T>::CircleType() : centerPoint(), circumPoint(){}

template <class T>
CircleType<T>::CircleType(T xCenter, T yCenter, T xCircum, T yCircu) : centerPoint(xCenter, yCenter), circumPoint(xCircum, yCircu){}


template <class T>
void CircleType<T>::setCenterPoint(T x, T y)
{
  centerPoint.setX(x);
  centerPoint.setY(y);
}

template <class T>
void CircleType<T>::setCircumPoint(T x, T y)
{
  circumPoint.setX(x);
  circumPoint.setY(y);
}



template <class T>
void CircleType<T>::getCenterPoint(T& xC, T& yC)
{
  xC = centerPoint.getX();
  yC = centerPoint.getY();
}



template <class T>
void CircleType<T>::getCircumPoint(T& xC, T& yC)
{
  xC = circumPoint.getX();
  yC = circumPoint.getY();
}

template <class T>
void CircleType<T>::printCenterPoint()
{
  centerPoint.print();
}

template <class T>
void CircleType<T>::printCircumPoint()
{
  circumPoint.print();
}

template <class T>
double CircleType<T>::calcRadius()
{
  return centerPoint - circumPoint;
  
}

template <class T>
double CircleType<T>::calcCircumference()
{
  return PI * 2 * calcRadius();
}

template <class T>
double CircleType<T>::calcArea()
{
  return PI * calcRadius() * calcRadius();
}

template <class T> 
void CircleType<T>::print()
{
  cout << "Center point: ";
  printCenterPoint();
  cout << "Circumference point: ";
  printCircumPoint();
  cout << "Radius: " << calcRadius() << endl;
  cout << "Circumference: " << calcCircumference() << endl;
  cout << "Area: " << calcArea() << endl;
}