#include "circle.h"
using namespace std;


  void circle::setradius(int r) { radius = r; }

  double circle::getradius() { return radius; }

  double circle::getArea() { return pi * radius * radius; }
  double circle::getDiameter() { return radius * 2; }
  double circle::getCircumference() { return 2 * pi * radius; }
