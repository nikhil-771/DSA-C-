// Merge sort 
#include<iostream>
using namespace std;
void mergeSort(int arr[], int lb,  int ub);
void merge(int arr[], int lb, int mid, int ub);

int main()
{
    int n = 10;
    int arr[n] = {5,7,1,3,9,10,8,6,2,4};
    mergeSort(arr,0,n-1);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

void mergeSort(int arr[], int lb, int ub)
{
    if(lb<ub)
    {
        int mid = (lb+ub)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);

        merge(arr,lb,mid,ub);
    }
}

void merge(int arr[], int lb, int mid, int ub)
{
    int n1=mid-lb+1;
    int n2=ub-mid;
    int a[n1];
    int b[n2];
    
    for(int i=0; i<n1; i++)
        a[i] = arr[lb+i];
    for(int j=0; j<n2; j++)
        b[j] = arr[mid+j+1];

    int i=0;
    int j=0;
    int k=lb;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
            arr[k++] = a[i++];
        else 
            arr[k++] = b[j++];
    }

    while(i<n1)
    {
        arr[k++] = a[i++];
    }
    while(j<n2)
    {
        arr[k++] = b[j++];
    }

}