#include<iostream>
using namespace std;

int sum(int n);

int main()
{
    int n=5;
    cout<<sum(n);
}
int sum(int n)
{
    if(n<=1)
        return n;
    return sum(n-1)+n;
}