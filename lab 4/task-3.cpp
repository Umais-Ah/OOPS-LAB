#include <iostream>
using namespace std;

class bank_account {
 private:
  string name;
  int num;
  int balance;
  int enter;

 public:
  bank_account() {
    name = "";
    num = 0;
    balance = 0;
  }

  bank_account(string n, int nu, int b) {
    name = n;
    num = nu;
    balance = b;
  }

  void details() {
    cout << "account number :" << num << endl;
    cout << "account name :" << name << endl;
    cout << " account balace :" << balance << endl;
  }
  void deposit() {
    int dep;
    cout << "Enter amount to deposit :";
    cin >> dep;
    balance += dep;
    cout<<"amount after deposit is :"<<balance<<endl;

  }
  void Withdraw() {
    cout << "Enter amount to withdraw :";
    cin >> enter;
    while (enter > 25000) {
      cout << "Invalid amount ,Enter again:";
      cin >> enter;
    }
    balance -= enter;
    cout<<"amount after withdraw is :"<<balance<<endl;

  }

  void Menu() {
    int opt;

    do {
      cout <<endl<< "1. deposit amount " << endl;
      cout << "2. withdraw amount " << endl;
      cout << "3. display details " << endl;
      cout << "4. Exit" << endl;

      cout << endl<<"Enter option :";
      cin >> opt;

      switch (opt) {
        case 1: {
          deposit();
          cout << "amount deposit sucessfully" << endl;
          break;
        }
        case 2: {
          Withdraw();
          cout << "amount withdraw sucessfully" << endl;
          break;
        }

        case 3: {
          details();
          break;
        }

        default: {
          cout << "invalid option" << endl;
        }
      }

    } while (opt != 4);
  }
};

int main() {
  bank_account b1;
  bank_account b2("Messi", 10, 241144);

  b2.Menu();

  
}