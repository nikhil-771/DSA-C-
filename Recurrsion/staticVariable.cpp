// static variable
#include<iostream>
using namespace std;

int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        return fun(n-1)+x;
    }
    return 0;
}

int main()
{
    int x=5;
    printf("Output \n");
    cout<<(fun(x));
}