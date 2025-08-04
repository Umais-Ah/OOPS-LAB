
#include<iostream>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount(int accNo,string title,double balance):accNo(accNo),title(title),balance(balance){}
void BankAccount::deposit(int amount){
    if(amount > 0){
        balance+=amount;
    }
}

bool BankAccount::withdraw(int amount){
    if(amount <=0){
        balance-=amount;
        return true;
    }
    else{
        cout<<"Insufficient Amount"<<endl;
    }
}

double BankAccount :: getBalance(){
    return balance;
}.