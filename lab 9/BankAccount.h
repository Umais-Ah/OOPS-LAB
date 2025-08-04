#ifndef BANKACCOUNT
#define BANKACCOUNT
#include <string>
using namespace std;

class BankAccount{
  private:
  int accNo;
  string title;
  double balance;
  public:
  BankAccount(int accNo,string title,double balance);
  void deposit(int amount);
  bool withdraw(int amount);
  double getBalance();
};

#endif
