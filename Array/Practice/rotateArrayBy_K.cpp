#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int *arr, int n);
void rotate(int *arr, int n);   // Rotates keft by one
void rotate_left(int *arr, int n, int k);
void rotate_right(int *arr, int n, int k);

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {1,2,3,4,5,6,7,8,9,10};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    int n1 = sizeof(arr1)/sizeof(arr[0]);
    int n2 = sizeof(arr2)/sizeof(arr[0]);
    
    rotate(arr, n);
    printArr(arr, n1);

    //  To rotate left
    rotate_left(arr, n1, 4);
    printArr(arr,n1);

    //  To rotate right
    rotate_right(arr2, n2, 4);
    printArr(arr2,n2);

    
}

void rotate(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        swap(arr[i],arr[i+1]);
    }
}


void rotate_left(int *arr, int n, int k)
{
    k = k % n;
    reverse(arr, arr+n);
    reverse(arr, arr+n-k); // To rotate to left
    reverse(arr+n-  k, arr+n); // To rotate to left

    
}


void rotate_right(int *arr, int n, int k)
{
    k = k % n;
    reverse(arr, arr+n);
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
}
void printArr(int *arr, int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}