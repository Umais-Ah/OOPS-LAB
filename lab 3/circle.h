#ifndef ORDER_H
#define ORDER_H
#include<string>
using namespace std;

class circle {
 private:
  double radius;
  double pi = 3.14159;

 public:
  void setradius(int r);

  double getradius();

  double getArea();
  double getDiameter();
  double getCircumference();
};
#endif
