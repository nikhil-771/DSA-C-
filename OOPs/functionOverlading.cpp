#include <iostream>
using namespace std;

class Overload
{
    public:
    void fun()
    {
        cout<<"Function with no args"<<endl;
    }
    void fun(double d)
    {
        cout<<"Function with doubel"<<endl;
    }
    void fun(int n)
    {
        cout<<"Function with int arg"<<endl;
    }
    void fun(int n, double d)
    {
        cout<<"Function with int and double arg"<<endl;
    }
};

int main()
{
    Overload a;
    a.fun();
    a.fun(8);
    a.fun(20.5);
    a.fun(44,26.14);
}