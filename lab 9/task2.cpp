#include <iostream>
using namespace std;

class Employee{
   protected:
   string name;
   int id;
   public:
   Employee(string name,int id): name(name),id(id){}
   virtual double calculatePay() = 0;
};

class SalariedEmployee : public Employee {
    private:
    double monthlySalary;
    public:
    SalariedEmployee(string name, int id, double monthlySalary) : Employee(name, id),monthlySalary(monthlySalary){}

    double calculatePay() override{
       return monthlySalary;
    }


};

class HourlyEmployee : public Employee {
    private:
    double hourlyRate;
    int hoursWorked;
    public:
    HourlyEmployee(string name, int id, double hourlyRate,int hoursWorked) : Employee(name, id),hourlyRate(hourlyRate),hoursWorked(hoursWorked){}
    

    double calculatePay() override {
       return hourlyRate*hoursWorked;
    }  
};
int main(){
   
 
   Employee *e1=new SalariedEmployee("Umais",23,250000);
   Employee *e2=new HourlyEmployee("Saim",25,1000,40);

   SalariedEmployee *pse=dynamic_cast<SalariedEmployee*>(e1);
   HourlyEmployee* phe = dynamic_cast<HourlyEmployee*>(e2);
   if(pse!=nullptr) {
      cout << "Salaried employee pay is: " << pse->calculatePay() << endl;
   } else {
       cout << "Downcast to Salaried Employee failed!" << endl;
   }

   
   if(phe!=nullptr) {
      cout << "Hourly employee pay is: " << phe->calculatePay() << endl;
   } else {
       cout << "Downcast to Hourly Employee failed!" << endl;
   }

   delete e1;
   delete e2;

   return 0;
}


