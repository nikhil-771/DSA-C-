#include<iostream>
using namespace std;

void fib(int n, int a, int b, int c);
int fibo(int n);
int main()
{
    int n= 8;
    fib(n,0,1,1);
    cout<<"\nOUTPUT 2\n";
    for(int i=0; i<=n; i++)
    {
        cout<<fibo(i)<<" ";
    }
}
//print 0,1 first
void fib(int n, int a, int b, int c)
{
    if(n>0)
    {    cout<<c<<" ";
        return fib(n-1,b,c,c+b);
    }
    return;
}

int fibo(int n)
{
    if(n<=1)
        return n;
    return fibo(n-1) + fibo(n-2);
}