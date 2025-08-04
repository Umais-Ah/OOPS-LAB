#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void eat(string a)
    {
        cout << "Eating " << a << endl;
    }
};

class Herbivore : public Animal
{
public:
    void eat(string a)
    {
        cout << "Herbivore Eating " << a << endl;
    }
};

class Carnivore : public Animal
{
public:
    void eat(string a)
    {
        cout << "Carnivore Eating " << a << endl;
    }
};

class Omnivore : public Animal
{
public:
    void eat(string a)
    {
        cout << "Omnivore Eating " << a << endl;
    }
};

int main()
{
    Animal *ptr;
    Herbivore h;
    Carnivore c;
    Omnivore o;

    ptr = &h;
    ptr->eat("Leaves");

    ptr = &c;
    ptr->eat("Leaves");

    ptr = &o;
    ptr->eat("Leaves");

    return 0;
}
