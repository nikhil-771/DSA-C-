// int arr[]={1,1,1,2,2};
// array is sorted
// each term only once
// each term only only 
// Complexity (2^n)*K*log 
// (log n because of set)
// This approach prints one ans. multiple times so use set 
#include <iostream>
#include <vector>
#include <set>
using namespace std;

void solve(int index, int sum, int *arr, vector<int>& ans, set<vector<int>>& unique_ans, int n);
void display(const set<vector<int>>& unique_ans);

int main()
{
    int arr[] = {1, 1, 1, 1, 2, 2};
    int sum = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans;
    set<vector<int>> unique_ans;
    solve(0, sum, arr, ans, unique_ans, n);
    display(unique_ans); // Add semicolon here
    return 0;
}

void solve(int index, int sum, int *arr, vector<int>& ans, set<vector<int>>& unique_ans, int n)
{
    if (sum == 0)
    {
        unique_ans.insert(ans);
        return;
    }
    if (index == n || sum < 0)
    {
        return;
    }
    if (arr[index] <= sum)
    {
        ans.push_back(arr[index]);
        solve(index + 1, sum - arr[index], arr, ans, unique_ans, n);
        ans.pop_back();
    }
    solve(index + 1, sum, arr, ans, unique_ans, n);
}

void display(const set<vector<int>>& unique_ans)
{
    for (const auto& combination : unique_ans)
    {
        for (auto it : combination)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}
