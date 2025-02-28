#include <iostream>
using namespace std;

class circle {
 private:
  double radius;
  double pi = 3.14159;

 public:
  void setradius(int r) { radius = r; }

  double getradius() { return radius; }

  double getArea() { return pi * radius * radius; }
  double getDiameter() { return radius * 2; }
  double getCircumference() { return 2 * pi * radius; }
};

int main() {
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