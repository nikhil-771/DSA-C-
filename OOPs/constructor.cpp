#include <iostream>
using namespace std;

class student
{
    string nickName;
    public:
    string name;
    int age;
    int gender;
    
    student()   //default constructor
    {
            //Usefull when not passign arguments 
            //while creating obeject
        cout<<"\nDefaul constructor: ";

    }


    student(string s, int ag, int gen)  //Parameterised Constructor
    {
        cout<<"\nParameterised constructor: ";
        name = s;
        age = ag;
        gender = gen;
    }
    student(student &a)
    {
        cout<<"\nCopy constructor: ";
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // destructor; 
    // no return and no parameters
    // called when object is destroyed
    //     here when main fucntion is exit
    ~student()  
    {
        cout<<"\n Call to desturctor";
    }
};

int main()
{
    student a("Nikhil Gusain", 28, 1);
    student b; 
    student c = a;

}