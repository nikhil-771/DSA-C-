#include<iostream>
using namespace std;


int fac(int n);
int fac2(int n,int result=1);
int main()
{
    int n = 5;
    cout<<"output 1: "<<fac(n);
    cout<<"\noutput 2 : "<<fac2(n);
    cout<<endl;
}
int fac(int n)
{
    if(n==1)
        return 1;
    return n*fac(n-1);
}

int fac2(int n, int result)
{
    if(n==1)
        return result;
    return fac2(n-1, result*n);
}
