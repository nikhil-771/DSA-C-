#include <iostream>
using namespace std;

class Student
{
    string nickName;
    public:
    string name;
    int age;

    Student(string st,  int ag)
    {
        name = st;
        age = ag;
    }

    void display()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        
    }

    
};

int main()
{
    Student a("Alice", 20);
    Student b("Bob", 22);
    Student c("Alice", 20);
    a.display();
    
}