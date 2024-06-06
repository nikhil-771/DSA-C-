#include <iostream>
using namespace std;

int sum2(int *ptr, int n);
int sum(int*ptr,int n);
int main()
{
    int n= 10;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    
    cout<<"\nOUTPUT1\n";
     cout<<sum(arr, 10)<<endl;
    cout<<"OUTPUT2:\n"<<sum2(arr,n-1)
    
}

int sum(int*ptr,int n)
{
    if(n==0)
        return 0;
    return *ptr + sum(++ptr,--n);
}


int sum2(int *ptr, int n)
{
    if(n==0)
        return ptr[n];
    return ptr[n] +sum2(ptr, n-1);
}