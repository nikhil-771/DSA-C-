#include <iostream>
using namespace std;

int count(int num);
int main()
{
    int num = 16879;
    cout<<count(num);
}


int count(int num)
{
    if(num==0)
        return 0;
    return 1+count(num/10);
}