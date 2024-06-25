 #include <iostream>
using namespace std;
 
int solve1(int *arr, int n, int k);
int main()
{
    int arr[]={1, 1, 1, 1, 1, 1,0,1,1,1,0,1,};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 1;
    cout<<solve1(arr, n, k)<<endl;
}

int solve1(int *arr, int n, int k)
{
    int j=0, count = 0, maxK=0;
    int index1=0, index2=0;

    while(j<n)
    {
        if(arr[j] == k)
        {
            count++;
            j++;
        }
        else
        {
            if(maxK < count)
            {
                maxK = count;
                index1 = j - count;
                index2 = j - 1;
            }
            j++;
            count = 0;
        }
        
    }
    if(maxK < count)
    {
        maxK = count;
        index1 = j-count;
        index2 = j-1;
    }
    cout<<"index are: "<<index1<< ", " <<index2<<endl;
    return maxK;
}