#include <iostream>
using namespace std;

void towerOfHanoi(int n, char a, char b, char c);
int main()
{
    int n = 3;
    towerOfHanoi(n,'A','B','C');
    return 0;
}

void towerOfHanoi(int n, char a, char b, char c)
{
    //base case
    if(n==1)
    {
        cout<<"move disk 1 from "<<a<<" to "<<c<<endl;
        return;
    }
    towerOfHanoi(n-1,a,c,b);
    cout<<"move disk "<<n<<" from "<<a<<" to "<<c<<endl;
    towerOfHanoi(n-1,b,a,c);
    

}