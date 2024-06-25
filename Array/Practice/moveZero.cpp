// Move all zero's to end without chanhgin order

#include <iostream>
using namespace std;

void move1(int *arr, int n);
void move2(int *arr, int n); // Better approach
void display(int *arr, int n);
int main()
{
    int arr1[] = {0,1,2,0,3,4,0,5,0};
    int arr2[] = {0,1,2,0,3,4,0,5,0};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    move1(arr1, n1);
    cout<<"OUTPUT 2\n";
    display(arr1, n1);

    move1(arr2, n2);
    cout<<"OUTPUT 3\n";
    display(arr2, n2);

}


void move1(int *arr, int n)
{
    int i=0,j=0;
    while(arr[j]!=0 && j<n)
    {
        j++;
    }
    if(j==n-1)
    {
        return;
    }
    i = j;
    while(i<n && j<n)
    {
        if(arr[j] ==  0)
        {
            
            j++;
            continue;
        }
        arr[i] = arr[j];
        j++;
        i++;
    }
    while(i<n)
    {
        arr[i] = 0;
    
        i++;
    }
    
}

void move2(int *arr, int n)
{
    int nonZeroIndex = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i!=0])
            arr[nonZeroIndex++] = arr[i];
    }
    while(nonZeroIndex < n)
    {
        arr[nonZeroIndex]  =0;
    }
}
void display(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}