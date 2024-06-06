// Check if array is sorted

#include <iostream>
using namespace std;


bool sorted(int*arr,int n)
{
    if(n==1||n==0)
        return true;
    if(*arr<=*(arr+1))
        return sorted(arr+1,n-1);
    return false;
}


int main()
{
    int arr[10]={2,4,6,8,10,13,14,18,20,22};
    int arr2[10]={2,0,6,8,10,13,14,18,20,22};
    if(sorted(arr,9))
        cout<<"sorted"<<endl;
    else
        cout<<"not sorted"<<endl;
    if(sorted(arr2,9))
        cout<<"sorted"<<endl;
    else
        cout<<"not sorted"<<endl;
    return 0;
    
}