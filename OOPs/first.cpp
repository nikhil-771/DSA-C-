#include <iostream>
using namespace std;

class student 
{
    //default is private

    string nickName;//private
    public:
    string name;
    int age;
    bool gender;
    
    void setNickName(string s)  //setter function
    {
        nickName=s;
    }
    void getNickName()  // getter fuvniton
    {
        cout<<"Nick naem "<<nickName<<endl;
    }
    void printInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        gender==1?cout<<"Male"<<endl:cout<<"Female "<<endl;

    }
};

int main() {
    student a;
    a.name = "Nikhil";
    a.age = 18;
    a.gender = 1;

    // Array of objects of student class:
   student arr[3];

    for (int i = 0; i < 3; i++) 
    {
        cout << "Enter details for student " << i + 1 << "\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin,arr[i].name);
        cout << "Age: ";
        cin >> arr[i].age;
        cout << "Gender (1 for male, 0 for female ): ";
        cin >> arr[i].gender;
    }

    a.printInfo();
}
