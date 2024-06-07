#include <iostream>
using namespace std;

class Base
{
    public:
    virtual void print()
    {
        cout<<"This is base class\n";

    }

    virtual void display()
    {
        cout<<"This is the base calss's display funciton\n";
    }
};

class Derived: public Base
{
    public:
    void print() override
    {
        cout<<"This is derived class\n";

    }

    void display() override
    {
        cout<<"This is the derived calss's display funciton\n";
    }
};



int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr ->print();
    bptr -> display();
    return 0;
}