// 3. You are developing a vehicle simulation system where different vehicles have different
// methods for starting and stopping. You want to use function overriding to handle these
// behaviors.
//  Create a base class Vehicle with virtual start() and stop() methods.
//  Create derived classes Car, Bike, and Truck that override the start() and stop()
// methods.
//  Use a base class pointer to call the start() and stop() methods on objects of the
// derived classes

#include<iostream>
using namespace std;

class vehicle{
public:
virtual void start(){
    cout<<"vechicle is starting"<<endl;
}

virtual void stop(){
    cout<<"vehicle is stoping"<<endl;
}

};

class car : public vehicle{
public:


void start(){
    cout<<"car is starting"<<endl;
}

void stop(){
    cout<<"car is stoping"<<endl;
}
  

};

class bike : public vehicle{
public:
  void start(){
    cout<<"bike is starting"<<endl;
}

void stop(){
    cout<<"bike is stoping"<<endl;
}

};

class truck : public vehicle{
public:
void start(){
    cout<<"truck is starting"<<endl;
}

void stop(){
    cout<<"truck is stoping"<<endl;
}
};

int main(){
vehicle *v;
car c;
bike b;
truck t;

v=&c;
v->start();
v->stop();

v=&b;

v->start();
v->stop();

v=&t;

v->start();
v->stop();


}