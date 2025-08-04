#include <iostream>
using namespace std;


class DayOfYear{
    private:
    int day;
    static string month[12];
    public:
    DayOfYear(int day):day(day){}

    void print(){
             if(day >= 1 && day <= 31){
                cout<<month[0]<<" "<<day<<endl;
             }
             else if(day > 31 && day <=59){
                cout<<month[1]<<" "<<day-31<<endl;
             }
             else if(day > 59 && day <=90){
                cout<<month[2]<<" "<<day-59<<endl;
             }
             else if(day > 90 && day <=120){
                cout<<month[3]<<" "<<day-90<<endl;
             }
             else if(day > 120 && day <=151){
                cout<<month[4]<<" "<<day-120<<endl;
             }
             else if(day > 151 && day <=181){
                cout<<month[5]<<" "<<day-151<<endl;
             }
             else if(day > 181 && day <=212){
                cout<<month[6]<<" "<<day-181<<endl;
             }
             else if(day > 212 && day <=243){
                cout<<month[7]<<" "<<day-212<<endl;
             }
             else if(day > 243 && day <=273){
                cout<<month[8]<<" "<<day-243<<endl;
             }
             else if(day > 273 && day <=304){
                cout<<month[9]<<" "<<day-273<<endl;
             }
             else if(day > 304 && day <=334){
                cout<<month[10]<<" "<<day-304<<endl;
             }
             else if(day > 334 && day <=365){
                cout<<month[11]<<" "<<day-334<<endl;
             }
    }




};

string DayOfYear :: month[12] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
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