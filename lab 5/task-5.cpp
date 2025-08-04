#include <iostream>
using namespace std;

class ParkedCar {
private:
    string make, model, color, license;
    int minutes;

public:
    ParkedCar() {}
    ParkedCar(string make, string model, string color, string license, int minutes)
        : make(make), model(model), color(color), license(license), minutes(minutes) {}

    int getcarminute() const { return minutes; }
    string getmake() const { return make; }
    string getcolor() const { return color; }
    string getlicense() const { return license; }
    string getmodel() const { return model; }
};

class parkingMeter {
private:
    int minutes;

public:
    parkingMeter(int m = 0) : minutes(m) {
        cout << endl << "Parking time purchased: " << m << " minutes" << endl;
    }
    int getminutes() const { return minutes; }
};

class parkingTicket {
private:
    ParkedCar pk;  // Composition (ticket stores a copy of car details)
    int fine;
    string officerName;
    string officerBadge;

public:
    parkingTicket(string n, string b, const ParkedCar& car, int overtime)
        : pk(car), officerName(n), officerBadge(b) {
        fine = 25;  // Base fine
        if (overtime > 60) {
            fine += ((overtime - 60) / 60) * 10;
        }
    }

    void displayTicket() const {
        cout << endl << "*** Parking Ticket Issued ***" << endl;
        cout << "Car: " << pk.getcolor() << " " << pk.getmake() << " " << pk.getmodel()
             << " (License: " << pk.getlicense() << ")" << endl;
        cout << "Fine: $" << fine << endl;
        cout << "Issued by Officer: " << officerName << " (Badge No: " << officerBadge << ")" << endl;
    }
};

class policeOfficer {
private:
    const parkingMeter* pm;  
    const ParkedCar* pk;     
    string name;
    string badge;

public:
    policeOfficer(const parkingMeter* pm, const ParkedCar* pk, string name, string badge)
        : pm(pm), pk(pk), name(name), badge(badge) {}

    void inspect() const {
        if (pk->getcarminute() > pm->getminutes()) {  // Car overstayed
            int overtime = pk->getcarminute() - pm->getminutes();
            parkingTicket pt(name, badge, *pk, overtime);
            pt.displayTicket();
        } else {
            cout << "No parking ticket generated" << endl;
        }
    }
};

int main() {
    ParkedCar car("Toyota", "Corolla", "Blue", "XYZ-123", 150);  
    parkingMeter meter(60);  
    policeOfficer officer(&meter, &car, "John Doe", "456");  

    officer.inspect();  

    return 0;
}
