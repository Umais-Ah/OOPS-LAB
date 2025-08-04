#include <iostream>
using namespace std;

class person{
    protected:
    int age;
    string name;
    public:
    person(string name,int age):name(name),age(age){}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

};
class Teacher : public person{
    private:
    int salary;
    string subject;
    public:
    Teacher(string name,int age,int salary,string subject) : person(name,age){
        this->salary=salary;
        this->subject=subject;
    }

    void getTeacherDetails(){
        display();
        cout<<"salary: "<<salary<<endl;
        cout<<"subject: "<<subject<<endl;
    }
    
};
class student : public person{
    private:
    int rollNo;
    string course;
    public:

    student(string name,int age,int rollNo,string course) : person(name,age){
        this->rollNo=rollNo;
        this->course=course;
    }

    void getstudentDetails(){
        display();
        cout<<"roll number: "<<rollNo<<endl;
        cout<<"course: "<<course<<endl;
    }

};

int main() {
     Teacher t1("Ahmed",35,200000,"Programming fundamentals");
     cout <<endl<<"--- Teacher Details ---"<<endl;
     t1.getTeacherDetails();
     cout <<endl<<"--- Student Details ---"<<endl;
     student s1("Umais",20,24122,"Cyber Security");
     s1.getstudentDetails();
    
    return 0;
}