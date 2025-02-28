#include<iostream>
#include "order.cpp"
#include "order.h"
using namespace std;
int main(){
  
   order o1;
   o1.setorderno(101);
   o1.setitem("Burger","Pizza","Biryani");
   o1.settotalcost(60);
   o1.applydiscount();
   o1.displaydetails();
   
}