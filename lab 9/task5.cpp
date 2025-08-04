#include <iostream>
#include "BankAccount.h"
using namespace std;

int main() {
    BankAccount account(101,"Umais",30000);
    account.deposit(100.0);
    account.withdraw(200.0);
    cout << "Current balance: $" << account.getBalance() << endl;
    return 0;
}