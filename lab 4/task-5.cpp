#include <iostream>
using namespace std;

class convert {
private:
    int number;
    string lessthan[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
                            "nine","ten","eleven","twelve","thirteen", "fourteen", "fifteen",
                            "sixteen", "seventeen", "eighteen", "nineteen" };
    string thousand = "thousand";
    string hundred = "hundred";
    string tens[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

public:
    convert(int num) {
        this->number = num;
    }

    void print() {
        int length = 0;
        int temp = number;

        
        while (temp > 0) {
            temp = temp / 10;
            length += 1;
        }

        if (number == 0) {
            cout << "zero" << endl;
            return;
        }

        if (length == 4) { 
            if ((number / 1000) % 10 != 0)
                cout << lessthan[(number / 1000) % 10] << " " << thousand << " ";
            number %= 1000; 
        }

        if (length >= 3) { 
            if ((number / 100) % 10 != 0)
                cout << lessthan[(number / 100) % 10] << " " << hundred << " ";
            number %= 100; 
        }

        if (number < 20) { 
            if (number != 0) 
                cout << lessthan[number];
        } else {
            cout << tens[number / 10]; 
            if (number % 10 != 0)
                cout << " " << lessthan[number % 10]; 
        }
    }
};

int main() {
    int number;
    cout << "Enter number between 0-9999: ";
    cin >> number;

    while (number < 0 || number > 9999) { 
        cout << "Invalid number, Enter again: ";
        cin >> number;
    }

    convert c1(number);
    c1.print();

    return 0;
}
