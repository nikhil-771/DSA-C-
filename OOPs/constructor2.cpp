// Other way of constructing constructor:
// student() : name(""), age(0){}
// this allows the constructor to initiallize
// variabels before rest body is executed


#include <iostream>
using namespace std;


class Student
{
    string nickName;
    public:
    string name;
    int age;

    // default constructor
    Student() : name(""), age(0) 
    {}

    // Use const keyword for giving const reference to string 
    Student(const string&st, int ag):name(st), age(ag){}
    
    void display()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        
    }
};

int main()
{
     
    Student a("Alice", 20);  // parameterized cons.
    a.display();
    Student c;   // default cons.
    c.display();

    
    
}