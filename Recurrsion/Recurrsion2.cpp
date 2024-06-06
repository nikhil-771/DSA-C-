// Guess the output
#include<iostream>
using namespace std;
int fun(int n);
int main()
{
    int x=5;
    printf("Output \n");
    cout<<(fun(x));
}
int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n;
    }
    return 0;
}