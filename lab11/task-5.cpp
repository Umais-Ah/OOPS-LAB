#include<iostream>
using namespace std;

class InsufficientFundsException: public exception{
    public:
    const char* what() const noexcept override{
        return "Insufficient Funds";
    }
    };

template <typename T>
class BankAccount{
    private:
   T amount;
   public:
   BankAccount(){
    amount=0;
   }

   void deposit(T Amount){
      amount+=Amount;
      cout<<"Amount added sucessfully"<<endl;
   }

   void withdrawal(T Amount){
    if(Amount > amount){
     throw InsufficientFundsException();
    }
    amount-=Amount;
    cout<<"Amount withdrawal sucessfully"<<endl;
   }
};
int main(){
    BankAccount<int> B;
    B.deposit(20000);
    try{

        B.withdrawal(1500);
    

        B.withdrawal(30000000);
    }
    catch(InsufficientFundsException e){
        cout<<e.what()<<endl;
    }

}