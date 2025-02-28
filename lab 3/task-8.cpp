#include<iostream>
#include "circle.cpp"
#include "circle.h"
using namespace std;

int main(){
  circle c1;
  double r;
  cout << "Enter radius :";
  cin >> r;

  c1.setradius(r);
  cout << "Radius is :" << c1.getradius() << endl;

  cout << "radius is :" << c1.getArea() << endl;
  cout << "diameter is :" << c1.getDiameter() << endl;
  cout << "circumference is :" << c1.getCircumference() << endl;
}