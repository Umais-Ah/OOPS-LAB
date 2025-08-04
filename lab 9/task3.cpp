#include<iostream>
using namespace std;

class shape{
 public:
   virtual double calArea()=0;

   virtual void drawShape()=0;


};

class circle : public shape{
    private:
  double radius;
  public:
  circle(double radius): radius(radius){}
  double calArea(){
    return 3.142 * radius * radius;
  }

  void drawShape(){
    cout<<"drawing Circle......"<<endl;
  }
};

class rectangle : public shape{
    private:
    double length;
    double  breath;
    public:
    rectangle(double length,double breath) : length(length),breath(breath){}
    double calArea(){
        return length*breath;
      }

      void drawShape(){
        cout<<"drawing rectangle......"<<endl;
      }

};
class  triangle : public shape{
   private:
   double length;
   public:
   triangle(double length):length(length){}
   double calArea(){
    return length*3;
   }

   void drawShape(){
    cout<<"drawing Triangle......"<<endl;
  }
};


int main(){
   shape *s[3]={ new circle(3),new rectangle(2,3) ,new triangle(6) };
   for(int i=0;i<3;i++){
    cout<<"Area :"<<s[i]->calArea()<<endl;
    s[i]->drawShape();
   }
}