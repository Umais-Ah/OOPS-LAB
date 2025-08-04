#include<iostream>
using namespace std;


class employee{ 
    private:
    string name;
    int salary[3];
    public:
    employee(string name,int salary1,int salary2,int salary3){
        this->name=name;
        salary[0]=salary1;
        salary[1]=salary2;
        salary[2]=salary3;
    }

    friend class Manager;

    friend int calculateAverageSalary(employee e);
};
int calculateAverageSalary(employee e){
    float average=(e.salary[0]+e.salary[1]+e.salary[2])/3;
    return average;
}

class Manager{
  public:

 void display(employee e){
    for(int i=0;i<3;i++){
        cout<<"salary "<<i+1<<":"<<e.salary[i]<<endl;
    }
 }


 void updateSalary(employee e){
    int index; int newSalary;
    cout<<"Enter which month salary do you want to change :";
    cin>>index;
     if(index >= 1 && index <=3){
        cout<<"Enter new salary :";
        cin>>newSalary;
        e.salary[index-1]=newSalary;
        cout<<"new salary for month "<<index<<" is :"<<e.salary[index-1]<<endl;
     }
 }

};
int main(){
employee e("Umais",2500,2800,2600);
Manager m;
m.display(e);
m.updateSalary(e);
float average= calculateAverageSalary(e);
cout<<"average salary is :"<<average<<endl;

}