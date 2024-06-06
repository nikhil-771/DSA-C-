#include <iostream>
using namespace std;

int search(int*arr,int n, int key)
{
    if(*arr== key)
    {
        cout<<"found ";
        return n;
    }
    return search((arr+1),n-1,key);
}
int main()
{
    int n=8;
    int arr[n]={5,3,6,7,19,50,11,78};
    int key = 19;
    cout<<"index is : "<<  n - search(arr,7,key);
}