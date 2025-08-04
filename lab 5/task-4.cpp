#include <iostream>
using namespace std;

class Engine {
public:
    Engine() {
        cout << "Engine created" << endl;
    }
    
    ~Engine() {
        cout << "Engine destroyed" << endl;
    }

    void start() {
        cout << "Engine is starting" << endl;
    }

    void stop() {
        cout << "Engine is stopping" << endl;
    }
};

class Car {
private:
    Engine e;  // Composition: Engine is part of Car and cannot exist without it

public:
    Car() {
        cout << "Car created" << endl;
    }

    void startCar() {
        cout << "Car is starting" << endl;
        e.start();  // Car controls Engine
    }

    void stopCar() {
        cout << "Car is stopping" << endl;
        e.stop();
    }

    ~Car() {
        cout << "Car destroyed" << endl;
    }
};

int main() {
    Car car1;  // When a Car object is created, an Engine is also created inside it
    car1.startCar();
    car1.stopCar();
    
    return 0;  // When the Car object is destroyed, the Engine is also destroyed
}