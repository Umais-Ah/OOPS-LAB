#include <iostream>
using namespace std;

class employee{
  private:
   string name;
   int number;
   string hiredate;
  public:
  employee(string name,int number,string hiredate){
       this->name=name;
       this->number=number;
       this->hiredate=hiredate;
  }

  string getname(){ return name;}
  string gethiredate(){ return hiredate;}
  int getnumber(){ return number;}

  void setname(string name){
    this->name=name;
  }
  void sethiredate(string hiredate){
    this->hiredate=hiredate;
  }

  void setnumber(int number){
    this->number=number;
  }
  
  void display(){
    cout<<"name :"<<getname()<<endl;
    cout<<"hire date: "<<gethiredate()<<endl;
    cout<<"number: "<<getnumber()<<endl;
  }

};

class productionWorker:public employee{
  private:
  int shift;
  double pay;
  public:
  productionWorker(string name,int number,string hiredate,int shift,double pay): employee(name,number,hiredate){
    this->shift=shift;
    this->pay=pay;
  }

int getshift(){ return shift;}
double getpay(){ return pay;}

void setshift(int shift){
  this->shift=shift;
}

void setpay(double pay){
  this->pay=pay;
}

void displayWorker(){
  display();
  if(getshift()==1){
  cout<<"shift :"<<"morning"<<endl;
  }
  else{
    cout<<"shift :"<<"night"<<endl;
  }
  cout<<"pay :"<<getpay()<<endl;
}
};

int main() {
  int shift;
  cout<<"Enter shift of worker 1(Morning) and 2(Night):";
  cin>>shift;
  while(shift!=1 && shift !=2){
    cout<<"invalid shift enter again :";
    cin>>shift;
  }
  productionWorker p1("Umais",23,"23-2-2025",shift,2000);
  p1.displayWorker();
    
    return 0;
}