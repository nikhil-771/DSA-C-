// highest common facotr

#include <iostream>
using namespace std;

int gcd(int x, int y);

int main()
{
    int x,y;
    x=100, y=3;
    cout<<gcd(x,y);
}

int gcd(int x, int y)
{
    if(y==0)
        return x;
    return gcd(y,x%y);
}