#include <iostream>
using namespace std;

class RetailItem{
   private:
    string description;
     int units;
     float price;

    public:
    void setdes(string d){
            description=d;
    }
    void setunits(int u){
            units=u;
    }
    void setprice(float p){
            price=p;
    }
    string getdes(){
        return description;
    }
    int getunits(){
        return units;
    }
    float getprice(){
        return price;
    }
};
