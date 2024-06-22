
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
