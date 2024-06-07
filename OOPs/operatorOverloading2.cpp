#include <iostream>
using namespace std;

class ComplexNum
{
    private:
    int real, img;

    public:

    ComplexNum()
    {
        real = 0;
        img = 0;
    }
    ComplexNum(int r, int i) // Parametrized constructor
    {
        real = r;
        img = i;
    }

    // Operator overloading
    // returnType(object) "operator" operatorSymbol (args)(refrence of another ComplexNum object)
    ComplexNum operator + (ComplexNum const &obj)
    {
        ComplexNum result; // object
        result.img = img + obj.img;
        result.real = real + obj.real;
    return result;
    }

    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }
};


int main()
{
    // Creating two complex number object
    ComplexNum c1(3, 4);
    ComplexNum c2(1, 2);

    // Adding the two complex numbers
    ComplexNum c3 = c1 + c2;

    // Displaying the result
    c3.display();

    return 0;
}