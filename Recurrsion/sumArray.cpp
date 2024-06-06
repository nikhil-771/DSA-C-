#include <iostream>
using namespace std;

int sum1(int*arr,int n);

int main()
{
    int size = 5;
    int arr[size]={1,2,5,4,5};
    cout<<sum1(arr,size)<<endl;
}

int sum1(int*arr,int n)
{
    if(n==0)
        return 0;
    return *arr+sum1(arr+1,n-1);
}