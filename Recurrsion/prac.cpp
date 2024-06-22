#include <iostream>
#include <vector>
using namespace std;

// void display(vector<int>ans)
// {
//     for(auto i:ans)
//         cout<<i<<" ";
//     cout<<endl;
// }

void solve(int *arr, int index, int n, vector<vector<int>>&ans,vector<int>output)
{
    if(index >= n)
    {
        ans.push_back(output);
        return;
    }

    int elem = arr[index];
    solve(arr,index+1,n,ans, output);
    output.push_back(elem);
    solve(arr,index+1,n,ans, output);
    
}

int main()
{
    vector<vector<int>>ans;
    vector<int>output;
    int arr[]={1,2,3 };
    solve(arr,0,3,ans,output);

    for(auto i:ans)
    {
        cout<<"[ ";
        for(auto j:i)
            cout<<j<<" ";
        cout<<"]"<<endl;
    }
}