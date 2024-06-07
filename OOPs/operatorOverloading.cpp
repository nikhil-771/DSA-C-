// Overloading operators
// syntax
// returnType operator operatorSymbol (Argument_list);


#include <iostream>
using namespace std;


class Student
{
    string nickName;
    public:
    string name;
    int age;

    Student() : name(""), age(0) 
    {}

    Student(const string&st, int ag):name(st), age(ag){}
    
    void display()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        
    }

    // Operator Overloading
    bool operator == (Student &a)
    {
        if(name==a.name && age==a.age )
            return true;
        else 
            return false;
    }
    // The name and age variable are of 2nd vairable

};


int main()
{
     
    Student a("Alice", 20);

    Student b = a;       // Copy constructor;

    Student c;  

    Student d;
    d = a;           // Copy assignment operator;
    
    c.display();
    d.display();

    if(c==a)
        cout<<"same"<<endl;
    else
        cout<<"Not same"<<endl;
    
    if(b==a && d==a)
        cout<<"Same "<<endl;
    else
        cout<<"Not same "<<endl;

    cout<<&a<<","<<&b<<" "<<&c<<" "<<&d<<endl;
}

