#include <iostream>
#include <vector>
using namespace std;


void display(vector<vector<int>> ans);
void permutations(int index, bool *marked, vector<int> &permu, vector<vector<int>>&ans, int *arr, int n);
int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool marked[n]={false};

    vector<vector<int>> ans;
    vector<int> permu;

    permutations(0, marked, permu, ans, arr, n);
    display(ans);

}


void permutations(int index, bool *marked, vector<int> &permu, vector<vector<int>>&ans, int *arr, int n)
{
    if(index == n)
    {
        ans.push_back(permu);
        return;
    }

    for(int i=0; i<n; i++)
    {
        if(marked[i] == true)
        {
            continue;
        }
        
        permu.push_back(arr[i]);
        marked[i] = true;
        permutations(index+1, marked, permu, ans, arr, n);
        marked[i] = false;
        permu.pop_back();
        
    }
}
void display(vector<vector<int>> ans)
{
    for(auto it:ans)
    {
        for(auto x:it)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}