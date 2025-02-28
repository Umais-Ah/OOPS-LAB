#include <iostream>
#include <string>
using namespace std;
class information {
 private:
  string name;
  string address;
  int age;
  int phone;

 public:
 public:
  void setname(string n) { name = n; }

  void setaddress(string a) { address = a; }

  void setage(int ag) { age = ag; }

  void setphone(int p) { phone = p; }

  string getname() { return name; }
  string getaddress() { return address; }
  int getage() { return age; }
  int getphone() { return phone; }
};

int main() {
  information s[3];
  string n, a;
  int ag, p;
  for (int i = 0; i < 3; i++) {
    cout << "person " << i + 1 << endl;
    cout << "Enter name :";
    getline(cin, n);
    s[i].setname(n);

    cout << "Enter address :";
    cin >> a;
    getline(cin, a);
    s[i].setaddress(a);

    cout << "Enter age :";
    cin >> ag;
    s[i].setage(ag);

    cout << "Enter phone :";
    cin >> p;
    s[i].setphone(p);
    cout << endl;
    cin.ignore();
  }

  cout << "Output" << endl;
  for (int i = 0; i < 3; i++) {
    cout << "person " << i + 1 << endl;
    cout << "name :" << s[i].getname() << endl;
    cout << "address :" << s[i].getaddress() << endl;
    cout << "age :" << s[i].getage() << endl;
    cout << "phone :" << s[i].getphone() << endl << endl;
  }
}