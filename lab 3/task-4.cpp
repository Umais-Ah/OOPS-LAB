#include <iostream>
#include <string>
using namespace std;

class library {
 private:
  string name;
  string author;
  int isbn;

 public:
  void setname(string n) { name = n; }
  void setauthor(string a) { author = a; }
  void setisbn(int i) { isbn = i; }

 void displaydetails(){
    cout << "\n---------- BOOK DETAILS ----------\n";
    cout << "Book Name: " << name << endl;
    cout << "Book Author: " << author << endl;
    cout << "Book ISBN: " << isbn << endl;
  }
};

int main() {
  library b1;
  string a, n;
  int i;
  cout << "Enter book name :";
  getline(cin, n);
  b1.setname(n);
  cout << "Enter book author :";
  getline(cin, a);
  b1.setauthor(a);
  cout << "Enter book isbn :";
  cin >> i;
  b1.setisbn(i);

  b1.displaydetails();
}