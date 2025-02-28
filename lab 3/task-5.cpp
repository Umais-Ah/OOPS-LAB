#include <iostream>
#include "retail.cpp"
using namespace std;

int main() {
    RetailItem r1;
    r1.setdes("jacket");
    r1.setunits(12);
    r1.setprice(59.95);
    RetailItem r2;
    r2.setdes("Designer Jeans");
    r2.setunits(40);
    r2.setprice(34.95);

    RetailItem r3;
    r3.setdes("Shirt");
    r3.setunits(20);
    r3.setprice(24.95);
   
    cout<<"Item #1 "<<r1.getdes()<<" "<<r1.getunits()<<" "<<r1.getprice()<<endl;
    cout<<"Item #2 "<<r2.getdes()<<" "<<r2.getunits()<<" "<<r2.getprice()<<endl;
    cout<<"Item #3 "<<r3.getdes()<<" "<<r3.getunits()<<" "<<r3.getprice()<<endl;


    return 0;
}

