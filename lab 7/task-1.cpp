// A C++ developer is tasked with creating a utility class for performing various
// mathematical operations. One of the requirements is to implement a function named
// calculateArea that can compute the area of different geometric shapes, depending on
// the input parameters.
// The function should handle the following cases:
//  For a circle, the function should take the radius as a single parameter (e.g.,
// double radius) and return the area as π * radius^2.
//  For a rectangle, the function should take the length and width as parameters
// (e.g., int length, int width) and return the area as length * width.
//  For a triangle, the function should take the base and height as parameters (e.g.,
// double base, double height) and return the area as 0.5 * base * height.
// Write a class named MathUtility that implements the calculateArea function, ensuring
// that it can handle each of these shapes based on the different input parameters.


#include<iostream>
using namespace std;


class MathUtility{
  public:
  double calArea(double radius){
         return 3.14*radius*radius;
  }

  int calArea(int length,int width){
      return length*width;
  }

  double calArea( double base, double height){
    return 0.5*base*height;
  }





};

int main(){
  MathUtility m;
  double answer1=m.calArea(23);
 cout<<"Area of circle is :"<<answer1<<endl;
  int answer2=m.calArea(2,5);
  cout<<"Area of rectangle is :"<<answer2<<endl;
  double answer3=m.calArea(5,4);
  cout<<"Area of Triangle is :"<<answer3<<endl;
}