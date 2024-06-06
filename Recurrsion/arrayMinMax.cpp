#include <iostream>
#include<climits>
using namespace std;

void finds(int*arr,int n, int small=INT_MAX, int large=INT_MIN);
int main()
{
    int n =10;
    int arr[n]={12,6,9,-10,100,15,-34,24,24,60};
    finds(arr,n-1);
}
// OR
// void finds(int*arr,int n, int small, int large)
// {
//     if(n==0)
//     {
//         cout<<"min = "<<min(small,arr[n])<<" Largest = "<<max(large,arr[n]);
//         return; 
//     }
//     return finds(arr,n-1,min(small,arr[n]),max(large,arr[n]));
// }

// OR
void finds(int*arr,int n, int small, int large)
{
    if(n==-1)
    {
        cout<<"min = "<<small<<" Largest = "<<large;
        return; 
    }
    return finds(arr,n-1,min(small,arr[n]),max(large,arr[n]));
}

// function to print Minimum element using recursion 
int findMinRec(int A[], int n) 
{ 
    // if size = 0 means whole array has been traversed 
    if (n == 1) 
        return A[0]; 
    return min(A[n-1], findMinRec(A, n-1)); 
} 