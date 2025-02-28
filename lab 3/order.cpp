#include "order.h"
#include<string>
#include<iostream>
using namespace std;

 void order::setorderno(int n){
    orderno=n;
 }
 void order::setitem(string itemlist1,string itemlist2,string itemlist3){
        item[0]=itemlist1;
        item[1]=itemlist2;
        item[2]=itemlist3;
 } 
 void order::settotalcost(double t){
   totalcost=t;
 }
 
 void order::applydiscount(){
     if(totalcost>=50){
        discount=10;
     }
 }
 void order::calculateFinalCost(){
       totalcost=totalcost-totalcost*(discount/100);
       cout<<"final cost is :"<<totalcost<<endl;
 }
 void order::displaydetails(){
    cout << "Order Number: " << orderno << endl;
    cout << "Items Ordered: ";
    for(int i=0;i<3;i++){
      cout<<item[i]<<" ";
    }
    cout <<endl<<"Total Cost Before Discount:" << totalcost << endl;
    cout << "Discount Applied: " << discount << "%" << endl;
    calculateFinalCost(); 

 }