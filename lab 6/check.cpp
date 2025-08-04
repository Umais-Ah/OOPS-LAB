#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex() : real(0), imag(0) {}
    
    // Prefix increment
    Complex& operator++() {
        real++;
        imag++;
        return *this;
    }

    // Postfix increment
    Complex operator++(int) {
        Complex temp = *this;
        real++;
        imag++;
        return temp;
    }
};

int main() {
    Complex c1;
    cout << "Before increment: " << c1.real << " + " << c1.imag << "i" << endl;
    
    // Prefix increment
    ++c1;
    cout << "After prefix increment: " << c1.real << " + " << c1.imag << "i" << endl;

    // Postfix increment
    c1++;
    cout << "After postfix increment: " << c1.real << " + " << c1.imag << "i" << endl;

    return 0;
}
