#include<iostream>
using namespace std;

class order{
private:

 int orderno;
 string item[3]; 
 double totalcost=0;
 double discount=0;

public:

void setorderno(int n){
    orderno=n;
 }
 void setitem(string itemlist1,string itemlist2,string itemlist3){
        item[0]=itemlist1;
        item[1]=itemlist2;
        item[2]=itemlist3;
 } 
 void settotalcost(double t){
   totalcost=t;
 }
 
 void applydiscount(){
     if(totalcost>=50){
        discount=10;
     }
 }
 void calculateFinalCost(){
       totalcost=totalcost-totalcost*(discount/100);
       cout<<"final cost is :"<<totalcost<<endl;
 }
 void displaydetails(){
    cout << "Order Number: " << orderno << endl;
    cout << "Items Ordered: ";
    for(int i=0;i<3;i++){
      cout<<item[i]<<" ";
    }
    cout <<endl<<"Total Cost Before Discount:" << totalcost << endl;
    cout << "Discount Applied: " << discount << "%" << endl;
    calculateFinalCost(); 

 }
};

int main(){
  
   order o1;
   o1.setorderno(101);
   o1.setitem("Burger","Pizza","Biryani");
   o1.settotalcost(60);
   o1.applydiscount();
   o1.displaydetails();
   
}