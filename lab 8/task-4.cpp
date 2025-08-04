#include<iostream>
using namespace std;

class BankAccount{
    private:
    string name;
    float balance;
    float transaction[3];
    public:
    BankAccount(string name,float balance,int transaction1,int transaction2,int transaction3){
        this->name=name;
        this->balance=balance;
        transaction[0]=transaction1;
        transaction[1]=transaction2;
        transaction[2]=transaction3;
    }

    friend  class BankManager;
    friend float calculateAverageTransaction(BankAccount a);
    friend float checkBalance(BankAccount a);
};

float calculateAverageTransaction(BankAccount a){
   float average=(a.transaction[0]+a.transaction[1]+a.transaction[2])/3;
    return average;

}

float checkBalance(BankAccount a){
    return a.balance;
}

class BankManager{
   public:
   void display(BankAccount a){
    cout<<"name :"<<a.name<<endl;
    cout<<"name :"<<a.balance<<endl;
    for(int i=0;i<3;i++){
      cout<<"transaction "<<i+1<<" :"<<a.transaction[i]<<endl;
    }
   }
   void updateBalance(BankAccount a){
     float Balance;
     cout<<"Enter new balance :";
     cin>>Balance;
     a.balance=Balance;

     
   }

    void updateTransaction(BankAccount a){
      int index; float newTrans;
    cout<<"Enter which month transaction do you want to change :";
    cin>>index;
     if(index >= 1 && index <=3){
        cout<<"Enter new transaction :";
        cin>>newTrans;
        a.transaction[index-1]=newTrans;
        cout<<"new transaction for month "<<index<<" is :"<<a.transaction[index-1]<<endl;
     }
   }


};



int main(){
BankAccount a("Umais",30000,2500,2800,2600);
BankManager bm;
bm.display(a);
bm.updateBalance(a);
bm.updateTransaction(a);
float average= calculateAverageTransaction(a);
cout<<"average salary is :"<<average<<endl;

float balance=0;
balance=checkBalance(a);
cout<<"your current balance is :"<<balance<<endl;




}