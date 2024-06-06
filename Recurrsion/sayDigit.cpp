#include <iostream>
using namespace std;

void sayDigit(string arr[],int n);
int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int num = 423;
    cout<<num<<endl; 
    sayDigit(arr,num);
}

void sayDigit(string arr[],int n)

{
    if(n>0)
    {
        sayDigit(arr,n/10);
        cout<<arr[n%10]<<" ";
    }
}