// let arr[] = {2,3,4,5,7} & sum = 7
// arr[i]>0 && all unique
// each term any number of times
// then combination is {2,2,3},{2,5}, {3,4}, {7}
// Complexity (2^n)*K

#include <iostream>
#include<vector>
using namespace std;


void solve(int index, int sum, int *arr, vector<int>&ans, int n);
void display(vector<int>ans);
int main()
{

    int arr[] = {1,2,3,4,5,7};
    int sum = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    solve(0, sum, arr, ans, n);
}


void solve(int index, int sum, int *arr, vector<int>&ans, int n)
{
    
    if(sum == 0)
    {
        display(ans);
        return;
    }
    if(index == n || sum < 0)
    {
        return;
    }
    
    if(arr[index] <= sum)
    {
        ans.push_back(arr[index]);
        solve(index, sum-arr[index], arr,ans,n);
        ans.pop_back();
    }
    
    solve(index+1, sum, arr, ans, n);
}

void display(vector<int>ans)
{
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}