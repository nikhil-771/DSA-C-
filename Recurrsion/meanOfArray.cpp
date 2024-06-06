#include<iostream>
using namespace std;

//Will give correct output one
int mean1(int*p, int n)
{
    static int i=0, sum=0;
    if(i<n)
    {
        i++;
        sum+=*p;
        return mean1(++p, n);
    }
    return (sum/n);
}

int mean2(int *p, int n, int i=0, int sum=0)
{
    if(i<n)
    {
        i++;
        sum+=*p;
        return mean2(++p, n, i, sum);
    }
    return (sum/n);
}
int mean3(int *p, int n,int sum=0, int i=0)
{
    
    if(i<n)
    {
        sum+=*p ;
        return mean3(++p, n, sum,++i) ;
    }
    else if(i==n-1)
        return (sum/n);
    return 0;
}
int main()
{
    int arr[5]={5,5,5,5,10};
    int arr2[5]={10,10,10,10,10};
    //Will give correct output one
    cout<<mean1(arr, 5)<<" ";
    cout<<mean1<<(arr2,5)<<" ";
    cout<<mean2(arr, 5)<<" ";
    cout<<mean2(arr2,5)<<" ";

    cout<<mean3(arr, 5)<<" ";
    cout<<mean3(arr2,5);

}