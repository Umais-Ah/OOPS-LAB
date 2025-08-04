#include <iostream>
using namespace std;

class person{
    public:
    person(){
        cout<<"person class called"<<endl;
    }
};

class Teacher : public person{
    public:
    Teacher(){
        cout<<"teacher class called"<<endl;
    }
 
};
class student : public person{
    public:

    student(){
        cout<<"student class called"<<endl;
    }


};

int main() {
     person p1;
     Teacher t1;
     student s1;
    
    return 0;
}