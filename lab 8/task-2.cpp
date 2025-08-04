#include<iostream>
using namespace std;

class car{
   private:
   string name;
   string model;
   int price;
    public:
  car(string name,string model,int price): name(name),model(model),price(price){}

    friend class Mechanic;


};
class Mechanic{
    public:
  
  void display(car c){
    cout<<"name :"<<c.name<<endl;
    cout<<"model :"<<c.model<<endl;
    cout<<"price :"<<c.price<<endl;

  }

  void discount(car c){
      if(c.price > 2500){
          cout<<"Congrats! you got discount"<<endl;
          c.price=2500-c.price*0.10;
          cout<<"new price of the car is :"<<c.price<<endl;
      }
      else{
        cout<<"you got no discount"<<endl;
      }
  }
};

int main(){
car c("Corolla","toyota",2800);
Mechanic m;
m.display(c);
cout<<"--------------"<<endl;
m.discount(c);
}