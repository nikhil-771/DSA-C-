/*
arr1[] = {1,2,3,4,5}  
arr2[] = {2,3,4,4,5}
union is {1,2,3,4,5}
Sets can be used because they remove duplicate element
*/

#include <iostream>
#include <map>
#include <vector>
using namespace std;

void printUnion1(int *ar1, int *ar2, int n1, int n2); // Uses map
// Two poionter appraoch 
// Does not work for duplicate elements in same array
void printUnion2(int *ar1, int *ar2, int n1, int n2);
// Two pointer apprach haandel duplicate
void printUnion3(int *ar1, int *ar2, int n1, int n2);

int main()
{
    int arr1[] = {1,2,3,4,5,6,7,10};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);  
    int arr2[] = {2,3,4,4,5,6,7,8};

    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    printUnion1(arr1, arr2, n1, n2);
    printUnion2(arr1, arr2, n1, n2);
    printUnion3(arr1, arr2, n1, n2);
    

}


void printUnion1(int *ar1, int *ar2, int n1, int n2)
{
    map<int, int> map;
    vector<int> arr;
    for(int i= 0; i<n1; i++)
    {
        map[ar1[i]]++;
    }
    for(int i= 0; i<n2; i++)
    {
        map[ar2[i]]++;
    }

    for(auto it:map)
    {
        arr.push_back(it.first);
    }

    for(auto it:arr)
    {
        cout<<it<<"  ";
    }
    cout<<endl;

}


void printUnion2(int *ar1, int *ar2, int n1, int n2)
{
    int i=0,j=0;
    vector<int> arr;

    while(i<n1 && j<n2)
    {
        if(ar1[i] == ar2[j])
        {
            arr.push_back(ar1[i]);
            i++;
            j++;
        }
        else if(ar1[i] < ar2[j])
        {
            arr.push_back(ar1[i]);
            i++;
        }
        else
        {
            arr.push_back(ar2[j]);
            j++;
        }
    }
    while(i<n1)
    {
        arr.push_back(ar1[i++]);
    }
    while(j<n2)
    {
        arr.push_back(ar2[j++]);
    }
    for(auto it:arr)
    {
        cout<<it<<"  ";
    }
    cout<<endl;
}

void printUnion3(int *ar1, int *ar2, int n1, int n2)
{
    
    int i=0,j=0;
    vector<int> arr;

    while(i<n1 && j<n2)
    {
        if (ar1[i] <= ar2[j]) // Case 1 and 2
    {
      if (arr.size() == 0 || arr.back() != ar1[i])
        arr.push_back(ar1[i]);
      i++;
    } else // case 3
    {
      if (arr.size() == 0 || arr.back() != ar2[j])
        arr.push_back(ar2[j]);
      j++;
    }
  }
    while(i<n1)
    {
        arr.push_back(ar1[i++]);
    }
    while(j<n2)
    {
        arr.push_back(ar2[j++]);
    }
    for(auto it:arr)
    {
        cout<<it<<"  ";
    }
}