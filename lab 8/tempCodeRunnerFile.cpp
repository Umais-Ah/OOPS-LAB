#include<iostream>
using namespace std;

class Time;

class Speed{
 private:
 int speed;
 public:
 Speed(int speed):speed(speed){}

friend  float calcDistance(Time t,class Speed s);

};

class Time{
      private:
      int time;
      public:
      Time(int time): time(time){}

friend  float calcDistance(Time t,class Speed s);

};


float calcDistance(Time t,Speed s){
    int distance=0;
    distance=t.time * s.speed;
    return distance;
}

int main(){
Time t(2);
Speed s(3);
float answer=0;
answer=calcDistance(t,s);
cout<<"distance is :"<<answer<<endl;
}