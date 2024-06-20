#include<iostream>
#include<vector>
using namespace std;

void sub(vector<int> arr, vector<vector<int>> &ans, vector<int> output, int index )
{
    if(arr.size()==index)
    {
        ans.push_back(output);
        return;
    }
    
    sub(arr,ans,output, index+1);
    output.push_back(arr[index]);
    sub(arr, ans, output, index+1);

}

int main()
{
    vector<int>arr={1,2,3};
    vector<vector<int>> ans;
    vector<int>output;
    sub(arr, ans, output,0);
    for(auto it:ans)
    {
        cout<<"{";
        for(auto j:it)
        {
            cout<<j;
        }
        cout<<"}\n";
    }
}
