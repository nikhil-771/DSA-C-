#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>arr, vector<int>output, int index, vector<vector<int>> &ans)
{
    if(index==arr.size())
    {
        ans.push_back(output);
        return;
    }

    
    solve(arr,output,index+1, ans);

    int element=arr[index];
    output.push_back(element);
    
    solve(arr,output,index+1, ans);

}
int main()
{
    vector<int> arr={1,2,3};
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(arr,output,index, ans);
    for(auto it:ans)
    {
        cout<<"[";
        for(int i=0; i<it.size(); i++)
        {
            cout<<it[i];

            if(i!=it.size()-1)
                cout<<",";
        }
        cout<<"]"<<endl;
    }
}