#include <iostream>
using namespace std;

int sum1(int n);
int main()
{
    int n=168973;
    cout<<"OUTPUT1:\n"<<sum1(n);
}


int sum1(int n)
{
    if(n==0)
        return 0;
    return n%10 + sum1(n/10);
}