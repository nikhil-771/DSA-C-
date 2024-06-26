// Optimaization
// sort the array 
// skip rest of the recurrsion if sum < 0

#include <iostream>
#include <vector>
using namespace std;


void display(vector<vector<int>>ans);
void solve(int index, int sum, vector<int>&output, vector<vector<int>>&ans ,int *arr, int n);
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>>ans;
    vector<int>output;

    int sum = 5;
    solve(0, sum, output, ans,arr,n);

    display(ans);
}


void solve(int index, int sum, vector<int>&output, vector<vector<int>>&ans ,int *arr, int n)
{
    if(sum<0)
    {
        return;
    }
    if(index == n)
    {
        if(sum==0)
        {
            ans.push_back(output);
        }
        return;
    }
    if(sum<0)
    {
        return;
    }
    output.push_back(arr[index]);
    solve(index+1, sum-arr[index], output, ans, arr, n);
    output.pop_back();
    solve(index+1, sum,output, ans, arr, n);
}


void display(vector<vector<int>>ans)
{
    for(auto it: ans)
    {
        cout<<"{";
        for(auto x:it)
        {
            cout<<x<<",";
        }
        cout<<"}\n";
    }
}