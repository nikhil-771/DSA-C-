#include <iostream>
using namespace std;


bool checkSorted(int *arr, int n);
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(checkSorted(arr,n))
        cout<<"Array is sorted";
    else
        cout<<"Not sorted";
}

bool checkSorted(int *arr, int n)
{
    if(n==0 || n==1)
        return  true;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i+1] < arr[i])
            return false;
    }
    return true;
}