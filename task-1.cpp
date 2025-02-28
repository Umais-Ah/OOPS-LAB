#include <iostream>
using namespace std;

class employee
{
private:
  string name;
  int idNumber;
  string department;
  string postion;

public:
  employee(string n, int i)
  {
    name = n;
    idNumber = i;
    department = "";
    postion = "";
  }

  employee(string n, int i, string d, string p)
  {
    name = n;
    idNumber = i;
    department = d;
    postion = p;
  }

  employee()
  {
    name = "";
    idNumber = 0;
    department = "";
    postion = "";
  }

  void setname(string n) { name = n; }
  string getname() { return name; }

  void setidNumber(int i) { idNumber = i; }
  int getidNumber() { return idNumber; }

  void setdepartment(string d) { department = d; }
  string getdepartment() { return department; }

  void setpostion(string p) { postion = p; }
  string getpostion() { return postion; }
};

int main()
{
  employee e1("Susan Meyers", 47899, "Accounting", "Vice President");
  employee e2("Mark Jones", 39119, "IT", "Programmer");
  employee e3("Joy Rogers", 81774, "Manufacturing", "Engineer");

  cout << e1.getname() << " " << e1.getidNumber() << " " << e1.getdepartment()
       << " " << e1.getpostion() << endl;
  cout << e2.getname() << " " << e2.getidNumber() << " " << e2.getdepartment()
       << " " << e2.getpostion() << endl;
  cout << e3.getname() << " " << e3.getidNumber() << " " << e3.getdepartment()
       << " " << e3.getpostion() << endl;
}
