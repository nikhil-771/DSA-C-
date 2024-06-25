#include<iostream>
using namespace std;


void solve1(int *arr, int N)
{
    int xorN = 0;
    int xorArray = 0;
    for(int i=0; i<N; i++)
    {
        xorN = xorN ^ i;
        xorArray = xorArray ^ arr[i];
    }
    xorN = xorN ^ N ^ N+1; //(N+1 becuase array element begin with 1 and last element is N+1)
    cout<< (xorN ^ xorArray);
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,9};
    int n= sizeof(arr)/sizeof(arr[0]);

    solve1(arr, n);
}