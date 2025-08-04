#include<iostream>
using namespace std;

class ship{
  protected:
  string name;
  string year;
  public:
  ship(string name,string year):name(name),year(year){}
  void setname(string name){
    this->name=name;
  }
  void setyear(string year){
    this->year=year;
  }

  string getname(){ return name;}
  string getyear(){ return year;}


  virtual void display() {
    cout<<"SHIP DETAILS"<<endl;
    cout<<"name :"<<name<<endl;
    cout<<"year :"<<year<<endl;
  }

};

class CruiseShip : public ship{
   private:
   int  max;
   public:
   CruiseShip(string name,string year,int max):ship(name,year),max(max){}
   void setmax(){
    this->max=max;
   }

   int getmax(){
    return max;
   }

void display() override{
    cout<<endl<<"CRUISE DETAILS"<<endl;
  cout<<"name : "<<name<<endl;
  cout<<"max :"<<max<<endl;
}

};

class cargoShip  : public ship{
    private:
     int capacity;
     public:
     cargoShip(string name,string year,int capacity):ship(name,year),capacity(capacity){}
     void setcapacity(int capacity){
        capacity=this->capacity;
     }
     int getcapacity(){
        return capacity;
     }

     void display() override {
        cout<<endl<<"CARGOSHIP DETAILS"<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"capacity :"<<capacity<<endl;
      }
};
int main(){
    ship* s[3];

    s[0] = new ship("Ocean Explorer", "1990");
    s[1] = new CruiseShip("Sea Voyager", "2021", 3800);
    s[2] = new cargoShip("Titan Hauler", "2017", 700000);

    for (int i = 0; i < 3; i++) {
        s[i]->display();
        delete s[i]; 
    }




}