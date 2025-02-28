#include <iostream>
using namespace std;

class date {
 private:
  int day;
  int month;
  int year;

 public:
  void setday(int d) { day = d; }

  void setmonth(int m) { month = m; }

  void setyear(int y) { year = y; }

  void display(string arr[]) {
    cout << day << "/" << month << "/" << year << endl;
    for (int i = 0; i < 12; i++) {
      if (i == month - 1) {
        cout << arr[i] << "/" << day << "/" << year << endl;
        cout << day << "/" << arr[i] << "/" << year << endl;
      }
    }
  }
};

int main() {
  date d1;
  int d, m, y;
  string arr[12] = {"january",   "february", "march",    "april",
                    "may",       "june",     "july",     "august",
                    "september", "octuber",  "november", "december"};

  cout << "Enter day :";
  cin >> d;
  while (d < 1 || d > 31) {
    cout << "invalid day ,Enter again :";
    cin >> d;
  }

  d1.setday(d);
  cout << "Enter month :";
  cin >> m;
  while (m < 1 || m > 12) {
    cout << "invalid  month ,Enter again :";
    cin >> d;
  }
  d1.setmonth(m);

  cout << "Enter year :";
  cin >> y;

  d1.setyear(y);

  d1.display(arr);
  return 0;
}