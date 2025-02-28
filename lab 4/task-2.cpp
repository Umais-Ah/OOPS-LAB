// Create a class named 'Programming'.While creating an object of the class,
// if nothing is passed to it, then the message "I love programming languages"
// should be printed.If some String is passed to it, then in place of
// "programming languages" the name of that String variable
// should be printed.For example while creating object if we pass "C++",
//   then "I love C++ " should be printed.
#include <iostream>
using namespace std;

class programming {
 private:
  string word;

 public:
  programming() { cout << "I love programming languages" << endl; }

  programming(string s) {
    word = s;
    cout << "I love " << word << endl;
  }
};
int main() {
  programming p1;
  programming p2("Umais");
}
