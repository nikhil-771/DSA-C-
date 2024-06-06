#include<iostream>
using namespace std;
int pow(int x, int n);
int main()
{
    int n = 5;
    int x = 3;
    cout<<pow(x,n);
}
int pow(int x, int n)
{
    if (n==0)
        return 1;

    return x*pow(x,n-1);
}