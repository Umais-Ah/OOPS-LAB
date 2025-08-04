
#include<iostream>
using namespace std;

class vehicle{
    protected:
    string ID;
    string model;
    string year;
    public:
    vehicle(string ID, string model, string year):ID(ID),model(model),year(year){}
     virtual void displayDetails()=0;
};

class car : public vehicle{
    private:
    int numberOfDoors;
    public:
    car(string ID, string model, string year,int numberOfDoors):vehicle(ID,model,year),numberOfDoors(numberOfDoors){}
    
    void displayDetails() override{
        cout<<"ID : "<<ID<<endl;
        cout<<"model :"<<model<<endl;
        cout<<"year of manufacture :"<<year<<endl;
        cout<<"No of doors :"<<numberOfDoors<<endl;
    }
};

class bike : public vehicle{
    private:
    bool hasSideCar;
    public:
    bike(string ID, string model, string year,bool hasSideCar):vehicle(ID,model,year),hasSideCar(hasSideCar){}

        void displayDetails() override{
        cout<<"ID : "<<ID<<endl;
        cout<<"model :"<<model<<endl;
        cout<<"year of manufacture :"<<year<<endl;
        cout<<"Has sidecar :"<<hasSideCar<<endl;
    }
}; 

int main() {
    vehicle* v1 = new car("C123", "Sedan", "2022", 4);
    vehicle* v2 = new bike("B456", "Harley", "2021", true);

 
    cout <<endl<<"Car details: " << endl;
    v1->displayDetails();

    cout <<endl<<"Bike details: " << endl;
    v2->displayDetails();
}