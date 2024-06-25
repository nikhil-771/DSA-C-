// Remove duplicate in sorted array

#include <iostream>
using namespace std;


int removeDuplicate(int arr[], int n)
{
    int i=0;
    int j=1;
    while(j<n)
    {
        if(arr[i] == arr[j])
        {
            j++;
        }
        else
        {
            i++;
            arr[i] = arr[j];
            j++;
        }
    }
    return i+1;
}
int main()
{
    int arr[]={1,1,2,3,4,5,5,5,5,6,6,7,8,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int newSize = removeDuplicate(arr, n);
    cout<<"NEW ARRAY IS\n";
    for(int i=0; i<newSize; i++)
        cout<<arr[i]<<" ";
}