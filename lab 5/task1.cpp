#include <iostream>
using namespace std;


class DayOfYear{
    private:
    int day;
    static string month[12];
    static int daysInMonth[12];
    public:
    DayOfYear(int day):day(day){}

   void print(){
     int temp=0;
    for(int i=0;i<12;i++){
        if(day <= temp + daysInMonth[i]){
            cout<<month[i]<<" "<<day-temp<<endl;
            break;
        }
        temp=temp+daysInMonth[i];
    }
   }
};

string DayOfYear :: month[12] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

int DayOfYear :: daysInMonth[12]={
    31, 28, 31, 30, 31, 30, 
    31, 31, 30, 31, 30, 31 
};

int main() {
    DayOfYear d1(31);
    d1.print();
    DayOfYear d2(32);
    d2.print();
    DayOfYear d3(365);
    d3.print();
    return 0;
}