#ifndef ORDER_H
#define ORDER_H
#include<string>
using namespace std;

class order{
private:

 int orderno;
 string item[3]; 
 double totalcost=0;
 double discount=0;

public:
 void setorderno(int n);
 void setitem(string itemlist1,string itemlist2,string itemlist3);
 void settotalcost(double t);
 void applydiscount();
 void calculateFinalCost();
 void displaydetails();
};
#endif
