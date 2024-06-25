// Find smallest, largest and 2nd smallest and 2nd largest in single traversel

#include <iostream>
// #include<climits>
using namespace std;


int main()
{
    int arr[] = {1,5,8,9,4,3,7,1,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sm = INT_MAX;
    int sm2 = INT_MAX;
    int lrg = INT_MIN;
    int lrg2 = INT_MIN;
    
    for(int i =0; i<n; i++)
    {
        if(arr[i] < sm)
        {
            sm2 = sm;
            sm = arr[i];

        }
        else if(arr[i] < sm2 && arr[i]!=sm)
        {

            sm2 = arr[i];
        }

        if(arr[i] > lrg)
        {
            lrg2 = lrg;
            lrg = arr[i];
        }
        else if(arr[i] > lrg2 && arr[i]!=lrg)
        {
            lrg2 = arr[i];
        }
    }


    cout<<"largest: "<<lrg<<"\n2nd largest: "<<lrg2<<endl;
    cout<<"smallest: "<<sm<<"\n2nd smallest: "<<sm2<<endl;
    
}