#include <iostream>
using namespace std;

class vehicle {
	protected:
		string manufacture;
		string model;
	public:
		vehicle(string manufacture,string model){
			this->manufacture=manufacture;
			this->model=model;
		}

		void getinfo(){
			cout<<"manufacture is :"<<manufacture<<endl;
			cout<<"model is :"<<model<<endl;
		}
		
};

class car : public vehicle {
	protected:
	int numDoors;
	  public:
	   car(string manufacture,string model,int numDoors):vehicle(manufacture,model){
	   this->numDoors=numDoors;
	   }
	   

	   
	   	void getCardetails(){
			cout<<"manufacture is :"<<manufacture<<endl;
			cout<<"model is :"<<model<<endl;
			cout<<"num of doors is :"<<numDoors<<endl;
		}
};

class ElectricCar : public car {
	private:
	int batteryCapacity;
	   public:
	   ElectricCar(string manufacture,string model,int numDoors,int batteryCapacity): car(manufacture,model,numDoors){
	   this->batteryCapacity=batteryCapacity;
	   }
	
	int getbatteryCapacity(){
			 return batteryCapacity;
		}
	
	void getElectricCardetails(){
			cout<<"manufacture is :"<<manufacture<<endl;
			cout<<"model is :"<<model<<endl;
			cout<<"num of doors is :"<<numDoors<<endl;
			cout<<"capacity of battery is :"<<batteryCapacity<<endl;
		}
	
	
};

int main(){
	
	ElectricCar E("Tesla", "Model S", 4, 100);

    cout << "Electric Car Details:" << endl;
    E.getElectricCardetails();

	
}
